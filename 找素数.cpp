#include<iostream>
using namespace std;
int prime(int x)
{
	int i;
	for(i=2;i<x;i++)
		if(x%i==0) break;
	if(i==x) return 1;
	else     return 0;	
} 
int main()
{
	int x;
	cin>>x;
	int b;
	b=prime(x);
	cout<<b;
}
