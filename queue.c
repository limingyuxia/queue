#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

// 创建队列
queue *queueCreate()
{
    queue *qu;

    qu = malloc(sizeof(queue));
    if (NULL == qu)
    {
        perror("malloc: ");
        return NULL;
    }

    qu->head = 0;
    qu->tail = 0;

    return qu;
}

// 队列是否为空
int queueIsempty(queue *qu)
{
    return (qu->head == qu->tail);
}

// 遍历队列
int queueTravel(queue *qu)
{
    if (queueIsempty(qu) == 1)
    {
        // 队列为空
        return 0;
    }

    int i = (qu->head + 1) % MAXSIZE;
    while (i != qu->tail)
    {
        printf("%d ", qu->data[i]);
        i = (i + 1) % MAXSIZE;
    }

    printf("%d\n", qu->data[i]);

    return 0;
}

// 入队
int enQueue(queue *qu, dataType *data)
{
    // 元素入在队尾
    if ((qu->tail + 1) % MAXSIZE == qu->head)
    {
        // 队列已满
        return -1;
    }

    // 循环队列
    qu->tail = (qu->tail + 1) % MAXSIZE;
    // 元素入队
    qu->data[qu->tail] = *data;

    return 0;
}

// 出队
int deQueue(queue *qu, dataType *data)
{
    return 0;
}

// 清除队列元素
int clearQueue(queue *qu)
{
    return 0;
}

// 销毁队列
int queueDestroy(queue *qu)
{
    free(qu);

    return 0;
}