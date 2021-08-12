#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	else
	{
		return gcd(b%a,a);
	}
}
int main()
{
	int a,b,q,rem;
	cout<<"Enter 2 numbers : ";
	cin>>a>>b;
	cout<<"The gcd of 2 nos is : "<<gcd(a,b);
	return 0;
}

