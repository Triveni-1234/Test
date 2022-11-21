#include<iostream>
using namespace std;
int BaseThree(int num)
{
	int a,b=0,c=1;
	for(int i=num;i!=0;i=i/3)
	{
		a=i%3;
		b=b+(a*c);
		c=c*10;
	}
	return b;
}
int main()
{
	int num;
	cin>>num;
	int x=BaseThree(num);
	cout<<x;
  return 0;
}
