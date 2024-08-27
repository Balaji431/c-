#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"a is "<<a<<"\n"<<"b is "<<b;
	return 0;
}
