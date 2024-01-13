#include<iostream>
using namespace std;
int sum(int b[3][4],int k)
{
	int s=0,i;
	for(i=0;i<3;i++)
		s+=b[i][k];
	return s;
 } 
void exch(int b[][],int x,int y)
{
	int a[3];
	for(int i=0;i<3;i++)
	{
		a[i]=b[i][x];
		b[i][x]=b[i][y];
		b[i][y]=a[i]; 
	}
}
int main()
{
	int a[3][4]={{5,8,10,15},{17,6,4,8},{6,15,9,12}};
	int i,j,m,t[4];
	cout<<"原始数组是：";
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		cout<<a[3][4]<<'\t';
		cout<<endl;
	for(i=0;i<4;i++)
		t[i]=i;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		if(t[j]<t[j+1])
		{
			m=t[j];
			t[j]=t[j+1];
			m=t[j+1];
			exch(a,j,j+1)
		} 
	cout<<"排序后的数组:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		cout<<a[i][j]<<'\t';
		cout<<endl;
	}
	return 0;
}

