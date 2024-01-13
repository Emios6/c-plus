#include<iostream>
using namespace std;
int main()
{
	int a[6]={9,8,7,6,5,4};
	int i,j,max,t;
	int n=6;
	for(j=0;j<n-1;j++)
	{
		max=j;
		for(i=j+1;i<n;i++)
			if(a[max]>a[i])
				max=i;
				t=a[max];
				a[max]=a[j];
				a[j]=t;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	return 0;
}
