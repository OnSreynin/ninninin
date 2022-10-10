#include<iostream>
using namespace std;
int main()
{
	double operand1,operand2,result;
	cout<<"This program allow you to perform a division of two numbers\n";
	cout<<"To process , enter two numbers:";
	try{
		cout<<"First number:";
		cin>>operand1;
		cout<<"second number:";
		cin>>operand2;
		if(operand2==0)
		   throw"Division by Zero not allowed";
		   result=operand1/operand2;
		   cout<<"\n"<<operand1<<"\n"<<operand2<<"="<<result<<endl;
		   
		
	}
	catch(char const *str)
	{
		cout<<"\n Bad operator:"<<str;
	}
}
