#include<iostream>
using namespace std;
int GYS(int m,int n)
{
	int r,b;
	do
	{
		r=m%n;
		m=n;
		n=r;	
	}while(r!=0);
	return m;
}

