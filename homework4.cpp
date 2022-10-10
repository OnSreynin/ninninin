#include<iostream>
using namespace std;
int average(float math,float kh)
{
	return(math+kh)/2;
}
float average(int eng,int programing,int physic)
{
	return(eng+programing+physic)/3; 
}
int main()
{
	int x=90,y=60;
	float m=79.50,n=90.50,z=50.50;
	cout<<"average(x,y)="<<average(x,y)<<endl;
	cout<<"average(m,n,z)="<<average(m,n,z)<<endl;
	return 0;
}
