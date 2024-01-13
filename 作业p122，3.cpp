#include<iostream>
using namespace std;
int fun(int x)
{
	int s=0;
	int i=x;
	do
	{
		s=s*10+x%10;
		x=x/10;
	}while(x);
	if(s==i)
		return 1;
	else
		return 0;
}
int main()
{
	int b=0;
	for(int i=1000;i<=2000;i++)
		if(fun(i))
		{
			b++;
			cout<<i<<'\t';
			if(b%5==0)
			cout<<endl;
		}
}

