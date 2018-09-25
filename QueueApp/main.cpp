#include <stdio.h>
#include <queue>
int main()
{
    bool enqueueWorks, dequeueWorks;
    
    int *p;
    p = (int*)malloc(sizeof(int));
    
    int UserOption = 0;  
    
    printf("This program uses Queues")
    
    switch(UserOption)
    {
        case 1:
            enqueueWorks = Enqueque();

            if(enqueueWorks == true)
                printf( "The number has been put into the queue!");
            else
                printf("The number was not able to be enqueued!");
            break;

        case 2:
            dequeueWorks = Dequeque();

            if(dequeueWorks == true)
                printf( "The number has been put into the queue!");
            else
                printf("The number was not able to be enqueued!");
            break;

        case 3:
            printf( "The current size of the queue is: " GetCurrentSize() );
            break;

        case 4:
            printf( "The contents of the queue are: " toString() );
            break;
    }
    return 0;
    
}

