#include<iostream>
using namespace std;
class Devide{
	public:
	Devide(){
		cout<<"Error";
	}
	char *getMessage()
	{
		return "Device by zero";
	}
};
float quote(int a,int b)
{
	if(b==0)throw Devide();
	  return(float)a/b;
}
int main()
{
	int x,y,result;
	while(cin>>x>>y)
	{
		try{
			result=quote(x,y);
			cout<<"result="<<result;
		}
	catch(Devide &d){
		cout<<"Have error"<<d.getMessage();
	}
	
 }
}
