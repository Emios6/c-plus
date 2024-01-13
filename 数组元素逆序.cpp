#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,7,8,87,10},i,n,t;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<'\t';
		cout<<endl;
}
