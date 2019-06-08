#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include "test.h"
#include <map>


using namespace std;

#define NUM_THREADS 5

void* say_hello(void* args)
{
    int tid = *((int*)args);
    cout << "Hello Runoob!" << tid << endl;
    pthread_exit(NULL);
    return 0;
}

int main()
{
    /* pthread_t tids[NUM_THREADS];
    int indexs[NUM_THREADS];    

    for(int i = 0; i < NUM_THREADS; i++)
    {
        cout << "main(): 创建线程, " << i << endl;
        indexs[i] = i;
        int ret = pthread_create(&tids[i], NULL, say_hello, (void *)&(indexs[i]));

        if(ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
            exit(-1);
        }
    }

    pthread_exit(NULL); */
    map<int, string> map_int2string;
    map_int2string.insert(pair<int, string>(1, "1abc"));
    map_int2string.insert(pair<int, string>(2, "2abc"));
    map_int2string.insert(pair<int, string>(3, "3abc"));
    map_int2string.insert(pair<int, string>(4, "4abc"));
    map_int2string.insert(pair<int, string>(5, "5abc"));
    map_int2string.insert(pair<int, string>(6, "6abc"));
    map_int2string.insert(pair<int, string>(7, "7abc"));
    map_int2string.insert(pair<int, string>(8, "8abc"));
    map_int2string.insert(pair<int, string>(9, "9abc"));
    map_int2string.insert(pair<int, string>(10, "10abc"));

    return 0;
}
