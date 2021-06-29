#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main()
{
    queue *qu;

    qu = queueCreate();
    if (NULL == qu)
    {
        return -1;
    }

    dataType arr[] = {2, 34, 89, 12, 5};
    int i;
    for (i = 0; i < sizeof(arr) / sizeof(*arr); i++)
    {
        enQueue(qu, &arr[i]);
    }

    queueTravel(qu);

    queueDestroy(qu);

    return 0;
}
