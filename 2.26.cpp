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
		cout<<"�ݭn�ɦ�"<< endl;
	system ("pause");
	return 0;
}


