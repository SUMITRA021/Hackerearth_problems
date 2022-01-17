#include<iostream>
using namespace std;

int main()
{
	int x=0,y=0;
	string s;
	cin>>s;

	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='z')
			x++;
		if(s[i]=='o')
			y++;
	}

	if(y == 2*x)
		cout<<"Yes"<<endl;
	else
	   	cout<<"No"<<endl;
}
