#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int score;
	cout<<"input your score: ";
	cin>>score;
	if ((score<0)||(score>100))
		cout<<"input error!"<<endl;
	if ((score<60)&&(score>49))
		cout<<"»Ý­n¸É¦Ò"<< endl;
	system ("pause");
	return 0;
}


