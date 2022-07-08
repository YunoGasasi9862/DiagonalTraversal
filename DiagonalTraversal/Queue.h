#pragma once
#define DATASIZE 20
#include "Binary.h"
typedef BinaryTree* QType;
#define GARBAGE NULL
class Queue
{
private:
	QType Data[DATASIZE];
	int front, rear, counter;
	

public:
	
	Queue()  //constructor (constructor initialzes it :))) fucking C++, love it!)
	{
		Queue::front = 0;  //access private variables
		Queue::rear = -1;
		Queue::counter = 0;

	}

	bool isEmptyQ(Queue* q)
	{
		if (q->counter == 0)
		{
			return 1;
		}
		return 0;
	}
	bool isFull(Queue* q)
	{
		if (q->counter == DATASIZE)
		{
			return 1;
		}
		return 0;
	}

	void Insert(Queue* q, QType data)
	{
		if (isFull(q))
		{
		   printf("FULL!\n");

		}
		else
		{

			q->rear = (q->rear + 1) % DATASIZE;
			q->Data[q->rear] = data;
			q->counter++;
		}
	}

	QType remove(Queue* q) 
	{
		QType popped;
		if (isEmptyQ(q))
		{
			printf("EMPTY!\n");
			popped = GARBAGE;
		}
		else
		{
			popped = q->Data[q->front];
			q->front = (q->front + 1) % DATASIZE;
		    q->counter--;

		}
		return popped;
	}
};