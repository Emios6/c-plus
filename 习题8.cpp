#include<iostream>
using namespace std;
int main()
{
	int m,n,i,max;
	cout<<"请输入两个正整数：";
	cin>>m>>n;
	max=m>n?m:n;
	for(i=max;i>=1;i--)
		if(m%i==0&&n%i==0)break;
	cout<<i<<endl;
	return 0;		
	
}
