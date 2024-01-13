#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=3;
	b%=b++||a++; 
	cout<<b;
}
