#include<iostream>
using namespace std;
int minv(int a, int b) 
{ 
    a = a % b;
	for (int x=1; x<b; x++)
	{
		if ((a*x) % b == 1)
        {
        	return x;
		}
	}
	return -1;
}
int main() 
{ 
    int a,b,temp;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter the mod value : ";
	cin>>b;
	for(int i=1;i<=a;i++)
	{
		if(i==a)
		{
			cout<<"The multiplicative inverse is : "<<minv(i,b);
		}
		else
		{
			temp=minv(i,b);
		}			
	}
    return 0; 
}

