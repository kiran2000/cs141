#include <iostream>
using namespace std;

int main() {
	int a,b,c,x,y;
	float d,e;
	cout<<"please enter two numbers\n";
	cin>>x>>y;
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	e=x%y;
	cout<<"the sum is"<<a<<endl;
	cout<<"the subtraction is"<<b<<endl;
	cout<<"the product is"<<c<<endl;
	cout<<"the division is"<<d<<endl;
	cout<<"the remainder is"<<e<<endl;
	return 0;
}