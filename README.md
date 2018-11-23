#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define size_of(t)  ((char *)(((t *)0)+1)-(char *)0)
class String_t
{
public:	
char* p;
int length=0;
String_t(char* st)                   //Constructor
{ 
    p=st;
}	 
int Length()                       //Length of the string
{ 
	  while(*(p++)!='\0')
        length++;
        return length;
}
int Size()                       //Size of the string
{
return length;

}
~String_t()                     //Destructor
{
	delete p;
}
void isEmpty()                 //To check if the string is empty
   {
   	  
      if(length==0)
      cout<<"\nString empty";
      else
      cout<<"\nString not empty\n";
   }
 int Capacity()                          //Capacity 
   {
       int k=pow(2,(size_of(size_t)));
       return (k-1);
   }
   double Maxsize()                      //Maxsize
   {
      int x=size_of(size_t)*8;
      return pow(2,x);
   }
   
   void copy(char*s,char*pt)            //Operator =
     {
     
         while(*pt != '\0')
         {
             *s++ = *pt++;
         }
         *s='\0'; 
     } 
	 void resize(char *st)
	 { int count=0;
	 
	 	while(count!=5){
		cout<<*st;
		st++;
		count++;
   }
} 
void Clear(char *t)                    //Clear function
{
while(*(t)!='\0'){
		*t='\0';
		*t++;
	}
cout<<t<<"Clear function";			
}
void Front(char st[])                   //Get the first character
{
char *p;
p=st;
cout<<*p;	
}
void At(char* st,int pos)              //Get the character at some position
{
	int i=0;
	while((*++st!='\0')&&(i<pos))++i;
	if(i==(pos))
	cout<<*st;
	
}            
void Back(char *st)                //Get the last character
{
cout<<st[length-1];     	
}
char* Replace(char*s,char old,char newt)       //Replace a character
{
	char*p=s;
	while(*p)
	{
		if(*p==old)
		*p=newt;
		++p;
		
	}
	return s;
}
	/*
while(st[i]!='\0')                           Replace a string with another
{
    int j=0;
    if(i<4)
    i++;
	if(i==4)
	{
		while(st2[j]!='\0')
	{
		st[i]=st2[j];
		i++;
		j++;
}
	}

	}*/	

};

int main()
{
	char name[ ]= "sample string";
	String_t s(name);
	cout<<s.Length();
	cout<<"\n"<<s.Size();
	int len=s.Length();
     char str2[len];
    char* m=str2;
    s.copy(m,name);
    cout<<str2;
	s.isEmpty();
	s.resize(name);
	cout<<"\n"<<s.Capacity();
	cout<<"\n"<<s.Maxsize();
	  cout<<"\n";
    s.Front(name);
    cout<<"\n";
    s.At(name,3);
    cout<<"\n";
    s.Back(name);
    cout<<"\n"<<s.Replace(name,'s','$');
    cout<<"\n";
     s.Clear(name);
}
