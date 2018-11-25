#include<bits/stdc++.h>
using namespace std;
#define  max 6
class Stack_t
{
private :
	int arr[max];
	int top;
public:
	Stack_t();
	void push(int);
	void pop();
	int IsEmpty();
	int IsFull();
	int Size();
	int Top();
};
Stack_t::Stack_t()                        //Constructor
{
	top=-1;
} 
int Stack_t::IsEmpty()                   //To check if the stack is empty
{
	if(top==-1)
	return 1;
	else 
	return 0;
}
int Stack_t::IsFull()                  //To check if the stack is full
{
	if(top==(max-1))
	return 1;
	else 
	return 0;
}
void Stack_t::push(int x)            //To push the elements into stack
{
	if(IsFull())
	cout<<"\nOverflow.........Stack is full.\n";
	else
	arr[++top]=x;
}
void Stack_t::pop()                 //To pop the elements from stack
{
	int temp;
	if(IsEmpty())
	cout<<"\nUnderflow.......Stack is Empty.\n";
	temp=arr[top];
	--top;
    cout<<temp;
}
int Stack_t::Size()               //Returns the size of the stack
{
    if(IsFull())
    return max;
    else;
	return top+2;
}
int Stack_t::Top()               //Returns the topmost element
{
	return arr[top];
}
int main()
{
	Stack_t st;
	cout<<"Inserting elements....";
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	st.push(7);
	cout<<"Size of the stack :"<<st.Size();
	cout<<"\nTopmost element :"<<st.Top();
	cout<<"\nPopping the elements...";
 	st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();	
}
