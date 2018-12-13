#include<bits/stdc++.h>
#include<math.h>
#define size_of(t)  ((char *)(((t *)0)+1)-(char *)0)
using namespace std;
class node
{
	public:
	int data;
	node *next;
	node *prev;
	
};
class List_t
{
node *head,*tail;	
public:
List_t()                                    //Constructor
	{
		head=NULL;
		tail=NULL;
	}

node *getnode();                 
void PushFront();                           //To insert the element in the front
void PushBack();                            //To insert the element at the back
void PopFront();                            //To delete the element in the front
void PopBack();                             //To delete the element in the back
void Front();                               //To get the front element in list
void Back();                                //To get the back element from the list
void isEmpty();                             //To check if list is empty  
int Size();                                 //To display the size
void Insert(int,int);                       //To insert element a particular position
void Display();                             //To display the elements in the list
void Remove(int);                           //To remove the element at a given position
void Erase();                               //To erase all the elements
double MaxSize();                           //To get the maxsize in the list
~List_t()                                   //Destructor
{
node *temp=head;
while(temp!=NULL)
{
	
	delete temp;
	temp=temp->next;
	}	
}

};
node* List_t::getnode()
{
	node *newnode;
	newnode=new node;
	cout<<"\nEnter the data :";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}
void List_t::PushFront()                     //To insert the element in the front
{
	node *temp;
	temp=getnode();
	if(head==NULL)
	head=tail=temp;
	else
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	
}
void List_t::PushBack()                    //To insert the element at the back
{
	node *temp;
	temp=getnode();
	if(head==NULL)
	head=tail=temp;
	else
	{
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}
	
}
void List_t::PopFront()                    //To delete the element in the front
{
	if(head==NULL)
	cout<<"\nEmpty List...";
	else
	cout<<"\nThe popped element is(front):"<<head->data;
	if(head==tail)
	head=tail=NULL;
	else
	    if(head==tail)
	    head=tail=NULL;
	    else
	   {
		 node *temp;
	    temp=head;
	    head=head->next;
	    head->prev=NULL;
      	delete temp;}

}
void List_t::PopBack()                 //To delete the element in the back
{
	if(head==NULL)
	cout<<"\nEmpty List...";
	else
	cout<<"\nThe popped element is(back):"<<tail->data;
	if(head==tail)
	head=tail=NULL;
	else
	{
		node *temp;
		temp=tail;
		tail=tail->prev;
		delete temp;
		tail->next=NULL;
	}	
}
void List_t::Front()                   //To get the front element in list                               
{
	cout<<"\nThe front element in the list is: "<<head->data;
}
void List_t::Back()                   //To get the back element from the list 
{
	cout<<"\nThe back element in the list is :"<<tail->data;
}
void List_t::isEmpty()                //To check if list is empty  
{
	if(head==NULL)
	cout<<"\nList is empty....";
	else
	cout<<"\nList is not empty...";

}
int List_t::Size()                    //To display the size
{
int count=1;
node *temp;
while(temp!=NULL)
{	count++;
  temp=temp->next;
}
return count;
}
void List_t::Insert(int pos,int value)    //To insert element a particular position
{
node* temp=new node();
temp->data=value;
temp->next=NULL;
if(pos==1)
{
	temp->next=head;
	head=temp;
	return;
	
}
node* temp1=head;
for(int i=0;i<pos-2;i++)
temp1=temp1->next;
temp->next=temp1->next;
temp1->next=temp;
}
void List_t::Display()                  //To display the elements
{
if(head==NULL)	
cout<<"\nEmpty List..";
else
{ 
	node *temp=head;
	cout<<"\nThe elements are:";
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}
}
void List_t::Erase()                 //To erase the elemnts
{
	tail=NULL;
	while(head!=NULL)
	{
		node *temp=head;
		head=head->next;
		free(temp);	
	}
	
}
void List_t::Remove(int pos)       //To remove element from particular position
{
	int k=1;
node *temp,*temp1;
temp=head;
while(k<pos-1)
{
	temp=temp->next;
	k++;
	}	
	temp1=temp->next;
	temp->next=temp1->next;
	temp1->next->prev=temp;
	free(temp1);
}
double List_t::MaxSize()                      //Maxsize
   {
      int x=size_of(size_t)*8;
      return pow(2,x);
   }
int main()
{
	List_t lt;
	cout<<"Maxsize :"<<lt.MaxSize();
    lt.isEmpty();
	lt.PushBack();
	lt.PushBack();
	lt.isEmpty();
    cout<<"\nSize of the list :"<<lt.Size();
	lt.Front();
	lt.PushBack();
	lt.Back();
	lt.PopFront();
	lt.PopBack();
	lt.PushBack();
	lt.PushBack();
	lt.Insert(2,9);
	cout<<"\nAfter insertion...";
	lt.Display();
	lt.Remove(2);
	cout<<"\nAfter deletion...";
	lt.Display();
    lt.Erase();
    cout<<"\nList is being erased....";
    lt.Display();
}
