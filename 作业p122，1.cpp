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
	cout<<"����������������"; 
	cin>>m>>n>>q;
	a=q>fun(m,n)?q:fun(m,n);
	cout<<"������ǣ�"<<a<<endl;
}
