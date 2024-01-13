#include<iostream>
using namespace std;
int fun(int m,int n)
{
	int z;
	z=m>n?m:n;
	return z;
}
int main()
{
	int m,n,q,a;
	cout<<"请输入三个整数："; 
	cin>>m>>n>>q;
	a=q>fun(m,n)?q:fun(m,n);
	cout<<"最大数是："<<a<<endl;
}
