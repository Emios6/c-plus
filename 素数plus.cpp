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
	int i,count=0;
	for(i=200;i<=300;i++)
		if(prime(i))
		{
		count++; 
		cout<<i<<'\t'; 
		if(count%5==0) cout<<endl;
		}
	return 0;
	
}
