#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 50
int number;

void* funcA_num(void* arg){
    for(int i =0;i< MAX;i++){
        int cur = number;
        cur++;
        usleep(10);
        number = cur;
        printf("Thread A, ID = %lu, number = %d\n",pthread_self() , number);
    }
    return NULL;
}

void* funcB_num(void* arg){
    for(int i =0;i< MAX;i++){
        int cur = number;
        cur++;
        number = cur;
        printf("Thread B, ID = %lu, number = %d\n",pthread_self() , number);
        usleep(5);
    }
    return NULL;
}

int main(int argc, const char* argv[]){
    pthread_t tid1,tid2;
    pthread_create(&tid1, NULL, funcA_num, NULL);
    pthread_create(&tid2, NULL, funcB_num, NULL);

    //阻塞，资源回收
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    return 0;
}
