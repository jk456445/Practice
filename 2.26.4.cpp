#include <iostream>
#include <cstdlib>
using namespace std;
void func(int,int);

int main()
{
	int a=3, b=6;
	cout<<"In main(),a="<<a<<",b="<<b<<endl;
	func(a,b);
	cout<<"After func(),a="<<a<<",b="<<b<<endl;		//�]���O��a�Mb�U�ƻs�@�ӥ�ifunc�A���|���쥻���� 
	system("pause");
	return 0;
}




void func(int a, int b)
{
	a+=10;
	b+=10;
	cout<<"In func(),a="<<a<<",b="<<b<<endl;
	return;
}

