#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

struct Test {
    int num;
    int age;
};

void* callback(void* arg){
    for(int i = 0; i< 5; i++){
        printf("子线程: i = %ld\n", i);
    }
    printf("子线程：%ld\n", pthread_self());
    
    struct Test* t = (struct Test*)arg;
    t->num = 200;
    t->age = 20;
    pthread_exit(t);    

    return NULL;
}

int main(){
    pthread_t tid;
    struct Test t;
    pthread_create(&tid, NULL, callback, &t);
    printf("主线程: %ld\n", pthread_self());
    
    pthread_detach(tid);
    pthread_exit(NULL);
    return 0;
}
