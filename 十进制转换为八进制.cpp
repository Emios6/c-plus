#include<iostream>
using namespace std;
int main()
{
	int x,i,n;
	int a[100];
	cin>>x;
	i=0;
	while(x)
	{
		a[i]=x%8;
		x=x/8;
		i++;
	}
	n=i;
	for(i=n;i>=0;i--)
		cout<<a[i];
		cout<<endl;
	return 0;
} 
