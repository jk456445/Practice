#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a, b;
	
	while(cin>>a>>b)
	{
		
		
		if((a%b==0)||(b%a==0))
		{
			cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
	
	
}
