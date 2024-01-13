#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int a[10];
	int i; 
	int x;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<<endl;
	}
}
	
