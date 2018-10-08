#include "QueueClass.h"
#include <stdio.h>
#include <stdlib.h>
        
    QueueClass::QueueArray() 
    {
            data = (int*)malloc( initialSize *sizeof(int) );
            capacity = initialSize;
            front = data;
            rear = &data[capacity];; 
            nElements = initialSize;
            
            //initializes all elements i the queue to -0
            for (int i = 0; i < nElements; i++)
		data[i] = -0;
            
            
    }

    QueueClass::~QueueArray()
    {
        free(data);
    }
        
    int QueueClass::getCurrentSize()
    {
        int* tmp;
	tmp = front;
	int count = 0;
        
	while (tmp != rear)
	{
		tmp++;
		count += 1;
	}
        
	return count;
    }

    bool QueueClass::Enqueue(int userInput)
    {
        //if  the queue is empty
	if (rear == NULL)
	{
            int* newQueue = (int*)malloc((capacity ) * sizeof(int));
            if (newQueue == NULL)
                    return false;

            free(data);
            data = newQueue;
            front = newQueue;
            rear = newQueue;
            data[0] = userInput;
            nElements++;
            return true;
        }
        
        //if there is room for the array
        if (nElements < capacity)
	{
		data[nElements]= userInput;
		rear += 1;
		nElements += 1;
		return true;
	}
        
        
        
    }
    
    bool QueueClass::Dequeue()
    {
        //check if the queue is populated
	if (front == NULL)
		return false;

	// If only one element remains
	if (nElements == 1)
    }
    
    //create a new pointer, use that pointer to loop through the queue
    void QueueClass::toString()
    {
        if (rear == NULL)
            printf("The queue is empty \n");
        else 
            for (int i = 0; i < nElements; i++)
            {
                printf("Integer at " + i + " =  %d \n", data[i]);
            }
    }

        
 




