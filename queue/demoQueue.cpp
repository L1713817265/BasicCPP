#include <iostream>
using namespace std;
#include <queue>
#include <string.h>

#define BUFFER_SIZE 5

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
} Stu_info;

/* 队列 */
int main()
{
#if 0
    queue<int> myqueue;

    for(int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        myqueue.push(idx);
    }
    
    int length = myqueue.size();
    printf("length: %d\n", length);

    int front = myqueue.front();
    printf("front: %d\n", front);

    int back = myqueue.back();
    printf("back: %d\n", back);

    int frontVal = 0;
    while(!myqueue.empty())
    {
        frontVal = myqueue.front();
        printf("frontVal: %d\n", frontVal);

        myqueue.pop();
    }
#endif

#if 1
    Stu_info stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1));
    memset(&stu2, 0, sizeof(stu2));
    memset(&stu3, 0, sizeof(stu3));

    stu1.age = 10;
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);
    stu1.sex = 'm';

    stu2.age = 20;
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);
    stu2.sex = 'f';

    stu3.age = 30;
    strncpy(stu3.name, "wangwu", sizeof(stu3.name) - 1);
    stu3.sex = 'm';

    queue<Stu_info> myqueue;

    myqueue.push(stu1);
    myqueue.push(stu2);
    myqueue.push(stu3);

    Stu_info topVal;
    memset(&topVal, 0, sizeof(Stu_info));

    while(!myqueue.empty())
    {
        topVal = myqueue.front();
        myqueue.pop();
        printf("age: %d\t name: %s\t sex: %c\n", topVal.age, topVal.name, topVal.sex);
    }
#endif
    return 0;
}