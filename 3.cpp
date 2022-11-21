#include<iostream>
using namespace std;
bool fun(int x)
{
	string s=to_string(x);
	int c=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='1'|| s[i]=='2' || s[i]=='5' || s[i]=='6'||s[i]=='8'||s[i]=='9')
		{
			c++;
		}
	}
	if(c==s.length())
	{
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	int n;
	int x=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		label:
			
		if(fun(x)==true)
		{
			cout<<x<<" ";
			x++;
		}
		else
		{
			x++;
			goto label;
		}
	}
  return 0;
}
