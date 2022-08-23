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
		}
		
		if(ch < 1 || ch > 4)
		{
			printf("\nInvalid Choice! Try Again!");
		}
		
	}while(ch!=4);
	
	return 0;	
}
