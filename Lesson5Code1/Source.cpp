#include<iostream>

using namespace std;

class node
{
public:
	int key;
	node* next;
};

class Queue
{
public:
	node* front;
	node* rear;
};

node* GetNewNode(int data)
{
	node* temp = new node;
	temp->key = data;
	temp->next = NULL;

	return temp;
}

Queue* CreateQueue()
{
	Queue* q = new Queue;
	q->front = NULL;
	q->rear = NULL;

	return q;
}

void Push(Queue* q, int data)
{
	node* temp = GetNewNode(data);

	if (q->rear == NULL)
	{
		q->front = temp;
		q->rear = temp;
	}
	else
	{
		q->rear->next = temp;
		q->rear = temp;
	}

}

void Display(Queue* q)
{
	node* temp = q->front;

	if (q->front == NULL)
	{
		cout << "Queue is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->key << " , ";
			temp = temp->next;
		}
		cout << endl;
	}
}

void Pop(Queue* q)
{
	if (q->front == NULL)
	{
		cout << "Queue is empty!" << endl;
	}
	else
	{
		//q->rear = q->front == NULL ? NULL : q->rear;
		q->front = q->front->next;
		if (q->front == NULL)
		{
			q->rear = NULL;
		}
	}
}

void Peek(Queue* q)
{
	if (q->front == NULL)
	{
		cout << "Queue is empty!" << endl;
	}
	else
	{
		cout << "Peek value is: " << q->front->key << endl;

	}
}

void IsQueueEmpty(Queue* q)
{
	if (q->front == NULL)
	{
		cout << "Queue is empty!" << endl;
	}
	else
	{
		cout << "Queue is not empty!" << endl;

	}
}

void DisplayQueueCount(Queue* q)
{
	node* temp = q->front;
	int count = 0;
	if (q->front == NULL)
	{
		cout << "Queue is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		cout << "Queue count is : " << count << endl;

	}
}

void MaxValue(Queue* q)
{
	node* temp = q->front;

	if (q->front == NULL)
	{
		cout << "Queue is empty!" << endl;
		return;
	}

	int currentMax = q->front->key;
	while (temp != NULL)
	{
		if (temp->key > currentMax)
		{
			currentMax = temp->key;
		}
		temp = temp->next;
	}
	cout << "Max value is : " << currentMax << endl;
}
void MinValue(Queue* q)
{
	node* temp = q->front;

	if (q->front == NULL)
	{
		cout << "Queue is empty!" << endl;
		return;
	}

	int currentMin = q->front->key;
	while (temp != NULL)
	{
		if (temp->key < currentMin)
		{
			currentMin = temp->key;
		}
		temp = temp->next;
	}
	cout << "Min value is : " << currentMin << endl;
}

//int main()
//{
//
//	Queue* q = CreateQueue();
//
//	int choice, val;
//
//	cout << "1.Push in Queue" << endl;
//	cout << "2.Pop from Queue" << endl;
//	cout << "3.Display Queue" << endl;
//	cout << "4.Is Queue Empty ?" << endl;
//	cout << "5.Queue Count" << endl;
//	cout << "6.Peek Value" << endl;
//	cout << "7.Find max value" << endl;
//	cout << "8.Find min value" << endl;
//	cout << "9.Exit" << endl;
//
//	do
//	{
//		cout << "Enter choice : " << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1:
//		{
//			cout << "Enter value to be pushed : " << endl;
//			cin >> val;
//			Push(q, val);
//			break;
//		}
//		case 2:
//			Pop(q);
//			break;
//		case 3:
//			Display(q);
//			break;
//		case 4:
//			IsQueueEmpty(q);
//			break;
//		case 5:
//			DisplayQueueCount(q);
//			break;
//		case 6:
//			Peek(q);
//			break;
//		case 7:
//			MaxValue(q);
//			break;
//		case 8:
//			MinValue(q);
//			break;
//		case 9:
//			cout << "Exit" << endl;
//			break;
//		default:
//			cout << "Invalid choice";
//			break;
//		}
//
//	} while (choice != 9);
//
//}