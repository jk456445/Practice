#include <iostream>
using namespace std;
int f(int,int);               //計算整數的次方
double t(double, int);
int main(void)
{
    int x,n;
    cout<<"計算x的n次方, 請輸入x & n:";
    cin>>x>>n;
    cout<<x<<"^"<<n<<" = "<<f(x,n)<<endl;
    cout<<t(x,n);
 return 0;
}

int f(int x,int n)
{
    int i,k;
    k = x;
    for(i=1;i<n;i++)
      x = x*k;
      return x;
  }
  
  double t(double a, int n)		//這個也可以算次方 
  {
  	double val=1.0;
  	while(n>0)
  	{
  		val=val*a;
  		n--;
	  }
	  return val;
  }
