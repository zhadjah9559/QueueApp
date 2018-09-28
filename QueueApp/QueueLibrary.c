#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Enqueque(int queue[], int* front, int* rear, int* nElements, int* capacity, 
              int userInput)
{   
    //if there is no more space in the Queue
    if( *nElements == capacity )
    {
        //update the capacity
        capacity = *nElements * 2;
        
        
        int* growQueue = (int*)malloc( (*capacity) * sizeof(int) );
                
        if(growQueue == NULL)
            return false;
        for(int i =0; i<*nElements; i++)
            growQueue[i] = (*queue)[i];
       
        free(*queue);
        *queue = growQueue;
        
        *queue[*nElements] = userInput;
        nElements++;
        
    }
        
    //if there is space in the queue
    else if(*nElements+1 > capacity)
    {
        //if queue is empty
         if(*front == NULL)
        {
            //front and rear are both pointers to the same element
            front = *queue[0];
            rear = *queue[0];
            
            *queue[0] = userInput;
            nElements++;
            return true;
        }
         
         else if(nElements >= 1)
         {
             //move the userInput into the next available spot behind the 
             //element after rear. plus four because int takes 4 bytes
             *queue[ rear+4 ] = userInput;
             rear = *queue[ rear+4 ];
             return true;
         }
    }
    
    
    
}

bool Dequeque(int queue[], int* front, int* rear)
{

}

int GetCurrentSize(int queue[], int* front, int* rear)
{
    
}

int toString(int queue[], int* front, int* rear)
{
    
}

