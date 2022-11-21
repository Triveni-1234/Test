#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	int count=0,c=0;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;s2[i]!='\0';i++)
	{
		count++;
	}
	char ch=s2[count-1];
	for(int i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==ch)
		{
			c++;
		}
	}
	cout<<c;
	return 0;
	
}
