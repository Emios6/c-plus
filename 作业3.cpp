#include<iostream>
using namespace std;
int main() 
{
	int n;
	double s=0,a=1;
	cout<<"ÇëÊäÈën=";
	cin>>n;
	for(int i=1;i<=n;i++)
	   a=a*i;
	   s=s+a; 
	cout<<s<<'\n'<<n<<endl;
	return 0;
}
