#include<iostream>
using namespace std;
int sushu(int x)
{
	int b;
	for(b=2;b<x;b++)
	if(x%b==0)
		break;
		else
		return 1;
}
int main()
{
	int a=0;
	for(int i=100;i<=200;i++)
		if(sushu(i))
		{
			a++;
			cout<<i<<'\t';
			if(a%5==0)
			cout<<endl; 
		}
}
