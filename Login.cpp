#include<iostream>
using namespace std; 
#include<conio.h> 		  // for getche()
void main()
{
	int charcount=0; 		//counts non-space characters
	int wordcount=0; 		//counts spaces between words
	char ch; 
	char correct[]="123";


//cout<<"*"; 
int trials=1;
bool verified=true;
do
{
	cout<<"Enter a password : ";
	verified=true;
	ch = getch();
	int i=0;
	while(ch!='\r')		 //continue reading till you reach Enter
	{
		cout<<"*";
		 if(ch!=correct[i++])		 //if a space is met, a new word is counted
     		  verified=false;
		 ch = getch();
	 
		  
	}
	if(!verified) 
		 cout<<"\n Wrong password!"<<endl;
	else
		cout<<"\nLogin successfully "<<endl;
	trials++;

	}while(!verified && trials<=3);
}