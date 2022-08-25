#include<bits/stdc++.h>

using namespace std;

class Queue {
	int rear, front;
	int size;
	int *arr;

	public:
		Queue(int s)
		{
			front = rear = -1;
			size = s;
			arr = new int[s];
		}
		
		int noOfElements()
		{
			if(front == -1 && rear == -1)
			{
				return 0;
			}
			int elements;
			elements = (front > rear)?(size - front + rear + 1):(rear - front + 1);
			return elements;
		}
		
		/*
		
		void noOfElements ()
		{
			if(front == -1 && rear == -1)
			{
				printf("\n%d", 0);
			}
			else
			{
				if(front > rear)
				{
					printf("\n%d", size - front + rear + 1);
				}
				else
				{
					printf("\n%d", rear - front + 1);
				}
			}
		}
		
		*/ 
		
		void enqueue(int value){
			if(front == 0 && rear == size-1 || rear == ((front-1)%(size-1))){
			printf("Queue is Full!\n");
			return;
			}
			else if(front == -1){
				front = rear = 0;
				arr[rear] = value;
			}
			else if(rear == size-1 && front != 0)
			{
				rear = 0;
				arr[rear] = value;
			}
			else
			{
				rear++;
				arr[rear] = value;
			}
		}
		void dequeue()
		{
			if(front == -1){
				printf("Queue is Empty!");
				return;
			}
			
			printf("\n%d is dequeued", arr[front]);
			
			arr[front] = -1;
			if(front == rear)
			{
				front = rear = -1;
			}
			else if(front == size - 1)
			{
				front = 0;
			}
			else 
			{
				front++;
			}
			return;
		}
		void displayQueue()
		{
				if(front == -1)
				{
					printf("Queue is Empty!\n");
				}
				else
				{
					if(rear >= front){
						for(int i = front; i <= rear; i++)
							printf("%d ", arr[i]);
					}
					else
					{
						for(int i = front; i < size; i++)
							printf("%d ", arr[i]);

						for(int i = 0; i <= rear; i++)
							printf("%d ", arr[i]);
					}
				}
		}
		
		
		void DeleteQueue 
		{
			front = -1;
			rear = -1;
		}
};



int main()
{
	Queue q(5);

	int ch = 0, value;
	
	do {
		printf("\n----Queue Menu----");
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Show");
		printf("\n4.Exit");
		printf("\n5.Number of Elements");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter a value : ");
				scanf("%d", &value);
				q.enqueue(value);
				break;
			case 2:
				q.dequeue();
				break;
			case 3:
				q.displayQueue();
				break;
			case 5:
				int n;
				n = q.noOfElements();
				printf("\nNumber of Elements : %d", n);
				break;
		}
		
		if(ch < 1 || ch > 5)
		{
			printf("\nInvalid Choice! Try Again!");
		}
		
	}while(ch!=4);
	
	return 0;	
}
