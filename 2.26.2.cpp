#include <iostream>
using namespace std;
int main()
{
	int num, i=1, sum=0;
	cout<<"請輸入整數"<<endl;
	cin>>num;

	while(i<=num)
	{
		sum+=i;
		i=i+2;
	}

	cout<<sum<<endl;
}
