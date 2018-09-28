#include <stdio.h>
#include <stdlib.h>

bool Enqueque(int queue[], int* front, int* rear, int intialSize);
bool Dequeque(int queue[], int* front, int* rear);
int GetCurrentSize(int queue[], int* front, int* rear);
int toString(int queue[], int* front, int* rear);

int main()
{
    bool enqueueResult, dequeueResult, ifEmpty;
    int UserOption = 0;  
    int capacity = 10;
        
    int* queue = (int*)malloc( capacity * sizeof(int) );
    for(int i = 0; i<capacity; i++)
        queue[i] = 0;
    
    int* front, rear;
   
    
    printf("This program implements Queues using structured programming. Enter "
            "a number from 1 to 4 . \n"
            "1. To enqueue a number \n"
            "2. To dequeue a number \n"
            "3. To get the current size of the queue \n"
            "4. To see the contents within the queue \n");
    scanf( "%d", &UserOption );
    
    switch(UserOption)
    {
        case 1:
            enqueueResult = Enqueque(&queue, &front, &rear, capacity);

            if(enqueueResult == true)
                printf( "The number has been put into the queue!");
            else
                printf("The number was not able to be enqueued!");
            break;

        case 2:
            dequeueResult = Dequeque( queue, &front, &rear );

            if(dequeueResult == true)
                printf( "The number has been dequeued!");
            else
                printf("The number wasn't able to be dequeued!");
            break;

        case 3:
            printf( "The current size of the queue is: " + GetCurrentSize( queue, &front, &rear) );
            break;
            
        //come back to this************************
        case 4:
            if(ifEmpty == true)
                printf("Queue is currently empty");
            else
                printf( "The contents of the queue are: " toString() );
            break;
        default:
            printf("Error, please enter a number from 1 through 4.");
    }
    free(queue);
    return 0;
    
}

