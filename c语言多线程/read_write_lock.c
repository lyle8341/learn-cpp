#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 50

int number;
pthread_rwlock_t rwlock;

void* writeNum(void* arg){
    for(int i =0;i< MAX;i++){
        pthread_rwlock_wrlock(&rwlock);
        int cur = number;
        cur++;
        number = cur;
        printf("Thread write, ID = %lu, number = %d\n",pthread_self() , number);
        pthread_rwlock_unlock(&rwlock);
        usleep(5);
     }
    return NULL;
}

void* readNum(void* arg){
    for(int i =0;i< MAX;i++){
        pthread_rwlock_rdlock(&rwlock);
        printf("Thread read, ID = %lu, number = %d\n",pthread_self() , number);
        pthread_rwlock_unlock(&rwlock);
        usleep(rand()%5);
    }
    return NULL;
}

int main(int argc, const char* argv[]){
    pthread_t rid[5],wid[3];
    pthread_rwlock_init(&rwlock, NULL);

    for(int i = 0; i < 5; i++){
        pthread_create(&rid[i], NULL, readNum, NULL);
    }
    for(int i = 0; i < 3; i++){
        pthread_create(&wid[i], NULL, writeNum, NULL);
    }

    //阻塞，资源回收
    for(int i = 0; i < 5; i++){   
        pthread_join(rid[i], NULL);
    }
     for(int i = 0; i < 3; i++){
        pthread_join(wid[i], NULL);
    }

    pthread_rwlock_destroy(&rwlock);

    return 0;
}
