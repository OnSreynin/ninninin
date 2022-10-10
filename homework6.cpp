#include<iostream>
using namespace std;
template<class T>
T Max(T &x , T &y)
{
	T temp =x;
	if(temp<y){
		temp=y;
	}
	return temp;
}
int main()
{
	int a =100, b=50;
	string ch1 = "visal";
	string ch2 = "sreynin";
	double n =3.45, m = 4.65;
	
	cout<<"Maximum = "<<Max(a,b)<<endl;
	cout<<"Maximum = "<<Max(ch1,ch2)<<endl;
	cout<<"Maximum = "<<Max(n,m)<<endl;
	return 0;
	
}

