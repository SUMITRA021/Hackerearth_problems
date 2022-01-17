#include<iostream>
using namespace std;

int main()
{
	
	int a,n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	if(arr[n-1]%10 == 0)
		cout<<"Yes";
	else
	 	cout<<"No";

}
