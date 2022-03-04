#include <iostream>
using namespace std;

void func(int num)
{
	int mask=1<<7;
	cout<<mask<<endl;  //會印出128，因為是把1左swift 7位 
	cout<<num<<endl;
 } 
 int main()
 {
 	func(64);
 	return 0;
 }
