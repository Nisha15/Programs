#include<bits/stdc++.h>
using namespace std;
#define max 6
class Queue_t
{
int arr[max];
int front,rear;
public:
Queue_t();
void enqueue(int);
int dequeue();
bool isEmpty();
int isFull();
int Size();
};
Queue_t::Queue_t()                    //Constructor.
{
	front=0;
	rear=-1;	
}
int Queue_t::Size()                  //Size function.
{
	return (rear-front+1);
 } 
int Queue_t::isFull()               //To check whether the queue is full. 
{
if(Size()>=max)
return 1;
else
return 0;	
}
void Queue_t::enqueue(int x)       //To Enqueue the elements.
{
if(isFull())
cout<<"\nOverflow...Queue is full.";
else
arr[++rear]=x;
}
int Queue_t::dequeue()             //To dequeue the elements.
{
	if(isEmpty())
	{
	cout<<"\nUnderflow...Queue is empty.\n";
	return 0;
	}
	return arr[front++];
}
bool Queue_t::isEmpty()           //To check if the queue is empty.
{
	if(front>rear)
	return true;
	else 
	return false;
}

int main()
{
	Queue_t qt;
	cout<<"Enquing the elements....";
	qt.enqueue(1);
	qt.enqueue(2);
	qt.enqueue(3);
	qt.enqueue(4);
	qt.enqueue(5);
	cout<<"\nSize of the queue :"<<qt.Size();
	qt.enqueue(6);
	qt.enqueue(7);
	cout<<"\nDequeing the elements...\n";
	cout<<qt.dequeue();
	cout<<qt.dequeue();
	cout<<qt.dequeue();
	cout<<qt.dequeue();
	cout<<qt.dequeue();
	cout<<qt.dequeue();
	cout<<qt.dequeue();
}
