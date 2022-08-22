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
		int dequeue()
		{
			if(front == -1){
				printf("Queue is Empty!");
				return -1;
			}
			
			int data = arr[front];
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
				
			return data;

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

	q.enqueue(14);
	q.enqueue(45);
	q.enqueue(1);
	q.enqueue(48);
	q.enqueue(56);
		
	q.displayQueue();
	
	q.enqueue(56);
	return 0;	
}
