#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,n,m;
	cout<<"enter the n amd m (n>m) : ";
	cin>>n>>m;
	if(n>m)
	{
		x=((n-1)/m)+1;
		cout<<"The value of x is : "<<round(x);
	}
	else
	{
		cout<<"invalid inputs";
		return 0;
	}
}

