#include <iostream> 
#include <cstdlib>
using namespace std;
int main()
{
	int sum=0;
	
	for(int i=1;i<=5;i++ )
	{
		sum+=1;
		cout<<"i="<<i<<",sum="<<sum<<endl;
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}
