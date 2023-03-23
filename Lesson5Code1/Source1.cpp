#include<iostream>
#include<queue>

using namespace std;

void Display(queue<int> q)
{
	queue<int> temp = q;

	while (!temp.empty())
	{
		cout << temp.front() << " , ";
		temp.pop();
	}
	cout << endl;
}

void MaxValue(queue<int> q)
{
	queue<int> temp = q;

	if (q.front()== NULL)
	{
		cout << "Queue is empty!" << endl;
		return;
	}

	int currentMax = q.front();

	while (!temp.empty())
	{
		if (temp.front() > currentMax)
		{
			currentMax = temp.front();
		}
		temp.pop();
	}
	cout << "Max value is : " << currentMax << endl;
}

void MinValue(queue<int> q)
{
	queue<int> temp = q;

	if (q.front() == NULL)
	{
		cout << "Queue is empty!" << endl;
		return;
	}

	int currentMin = q.front();

	while (!temp.empty())
	{
		if (temp.front() < currentMin)
		{
			currentMin = temp.front();
		}
		temp.pop();
	}
	cout << "Min value is : " << currentMin << endl;
}

int main()
{
	queue<int> q;

	int choice, val;

	cout << "1.Push in Queue" << endl;
	cout << "2.Pop from Queue" << endl;
	cout << "3.Display Queue" << endl;
	cout << "4.Is Queue Empty ?" << endl;
	cout << "5.Queue Count" << endl;
	cout << "6.Peek Value" << endl;
	cout << "7.Find max value" << endl;
	cout << "8.Find min value" << endl;
	cout << "9.Exit" << endl;

	do
	{
		cout << "Enter choice : " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "Enter value to be pushed : " << endl;
			cin >> val;
			q.push(val);
			break;
		}
		case 2:
			q.pop();
			break;
		case 3:
			Display(q);
			break;
		case 4:
			if (q.empty() == true)
			{
				cout << "Queue is empty!" << endl;
			}
			else
			{
				cout << "Queue is not empty!" << endl;
			}
			break;
		case 5:
			cout << "Queue count is : " << q.size() << endl;
			break;
		case 6:
			cout << "Peek value is: " << q.front() << endl;
			break;
		case 7:
			MaxValue(q);
			break;
		case 8:
			MinValue(q);
			break;
		case 9:
			cout << "Exit" << endl;
			break;
		default:
			cout << "Invalid choice";
			break;
		}

	} while (choice != 9);

}