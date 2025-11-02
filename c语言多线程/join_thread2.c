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
    //方式二 
    struct Test t;
    pthread_create(&tid, NULL, callback, &t);
    printf("主线程: %ld\n", pthread_self());
    void* ptr;
    //参数1：回收子线程的ID 参数2：接收子线程数据的指针
    //int pthread_join(pthread_t thread, void** retval);
    pthread_join(tid, &ptr);
    //直接从struct读
    printf("num: %d, age = %d\n", t.num, t.age);

    //从ptr中读取
    struct Test* ttt = (struct Test*)ptr;
    printf("num: %d, age = %d\n", ttt->num, ttt->age);
    return 0;
}
