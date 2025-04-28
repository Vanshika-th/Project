#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_fun(void *param)
{
    long num = (long)param;
    long fact = 1;
    for(int i = 1 ; i <= num ; i++){
        fact = fact * i;
    }
    sleep(3);
    return (void *)fact;
}

int main(void)
{
    pthread_t t1, t2, t3;
    void *ptr;

    pthread_create(&t1, NULL, thread_fun, (void *)6);
    // err check
  
    pthread_join(t1, &ptr);

    printf("factorial = %ld\n", (long)ptr);
    return 0;
}
