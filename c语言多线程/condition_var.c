//条件变量的主要作用：进行线程的阻塞
//条件变量只有在满足指定条件下才会阻塞线程

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

pthread_cond_t cond;
pthread_mutex_t mutex;

struct Node {
    int number;
    struct Node* next;
};
//链表头节点
struct Node* head = NULL;

//生产者, 头部添加节点
void* producer(void* arg){
    while(1){
        pthread_mutex_lock(&mutex);
        //创建新节点
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        //初始化
        newNode->number = rand()%1000;
        newNode->next = head;
        head = newNode;
        printf("生产者: id: %ld, number: %d\n", pthread_self(), newNode->number);        
        pthread_mutex_unlock(&mutex);
        //唤醒被阻塞的消费
        pthread_cond_broadcast(&cond);
        sleep(rand()%3);
    }
    return NULL;
}
//消费者,头部删除
void* consumer(void* arg){
    while(1){
        pthread_mutex_lock(&mutex);
        while(head == NULL){
            //阻塞消费者线程
            pthread_cond_wait(&cond, &mutex);
        }
        struct Node* tmp = head;
        printf("消费者：id: %ld, number: %d\n", pthread_self(), tmp->number);
        head = head->next;
        free(tmp);
        pthread_mutex_unlock(&mutex);
        sleep(rand() % 3); 
    }
    return NULL;
}


int main(){
    
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);

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

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);
   
    return 0;
}
