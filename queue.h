#ifndef QUEUE_H__
#define QUEUE_H__

typedef int dataType;

#define MAXSIZE 5

typedef struct node
{
    dataType data[MAXSIZE];
    int head; // 下标
    int tail;
} queue;

// 创建队列
queue *queueCreate();

// 队列是否为空
int queueIsempty(queue *);

// 遍历队列
int queueTravel(queue *);

// 入队
int enQueue(queue *, dataType *);

// 出队
int deQueue(queue *, dataType *);

// 清除队列元素
int clearQueue(queue *);

// 销毁队列
int queueDestroy(queue *);

#endif