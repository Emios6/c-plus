#include<iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
int px(int a[],int n)
{
	int i,j,min,t,count=0;
	for(j=0;j<n-1;j++)
	{
		min=j;
		for(i=j+1;i<n;i++)
			if(a[min]>a[i])
				min=i;
				t=a[min];
				a[min]=a[j];
				a[j]=t;
	}
	for(int i=0;i<20;i++)
	{
		count++;
		cout<<a[i]<<'\t';
		if(count%5==0)
		cout<<endl;
	}
	return 0;
}
int main()
{
	int a[20];
	int count=0;
	srand(time(NULL));
	for(int i=0;i<20;i++)
	{
		count++;
		a[i]=rand()%101;
		cout<<a[i]<<'\t';
		if(count%5==0) 
		cout<<endl;
	}
	cout<<endl;
	cout<<"ÅÅÐòºóµÄÊý£º";
	cout<<endl;
	int c[20];
	c[20]=px(a,20);
	return 0;		
}
