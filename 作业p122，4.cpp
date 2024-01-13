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
int GBS(int m,int n)
{
	int r;
	for(r=1;r<m*n;r++)
		if(r%m==0&&r%n==0) break;
	return r;
			
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<"最大公约数："<<GYS(m,n)<<endl;
	cout<<"最小公倍数："<<GBS(m,n)<<endl;
	return 0;
}
