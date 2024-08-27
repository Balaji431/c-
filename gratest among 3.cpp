#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout<<"enter first  number"<<endl;
	cin>>a;
	cout<<"enter second number"<<endl;
	cin>>b;
	cout<<"enter third number"<<endl;
	cin>>c;
	if(a>b&&a>c){
		cout<<a<<"is gratest"<<endl;
	}
		if(b>a&&b>c){
		cout<<b<<"is gratest"<<endl;
	}
	else
	{
		cout<<c<<"is gratest"<<endl;
	}
//	a=b;
//	b=temp;
//	cout<<"a is "<<a<<"\n"<<"b is "<<b;
	return 0;
}
