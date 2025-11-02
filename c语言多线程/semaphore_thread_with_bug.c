#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>

//生产者信号量
sem_t semp;
//消费者信号量
sem_t semc;

struct Node {
    int number;
    struct Node* next;
};
//链表头节点
struct Node* head = NULL;

//生产者, 头部添加节点
void* producer(void* arg){
    while(1){
        sem_wait(&semp);
        //创建新节点
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        //初始化
        newNode->number = rand()%1000;
        newNode->next = head;
        head = newNode;
        printf("生产者: id: %ld, number: %d\n", pthread_self(), newNode->number);        
        sem_post(&semc);
        sleep(rand()%3);
    }
    return NULL;
}
//消费者,头部删除
void* consumer(void* arg){
    while(1){
        sem_wait(&semc);
        struct Node* tmp = head;
        printf("消费者：id: %ld, number: %d\n", pthread_self(), tmp->number);
        head = head->next;
        free(tmp);
        sem_post(&semp);
        sleep(rand() % 3); 
    }
    return NULL;
}


int main(){

    //生产者  只有一个信号量，所以没有互斥锁也正常，如果多个信号量就需要互斥锁配合
    sem_init(&semp, 0, 1);   
    //消费者
    sem_init(&semc, 0, 0);
    
    pthread_t pid[5], cid[5];
    for(int i = 0; i < 5; i++){
        pthread_create(&pid[i], NULL, producer, NULL);
    }
    for(int i = 0; i < 5; i++){
        pthread_create(&cid[i], NULL, consumer, NULL);
    }

    //释放资源
    for(int i = 0; i < 5; i++){
        pthread_join(pid[i], NULL);
        pthread_join(cid[i], NULL);
    }

    sem_destroy(&semp);
    sem_destroy(&semc);
   
    return 0;
}
