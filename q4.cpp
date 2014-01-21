//184966

#include<iostream>
using namespace std;

int ispalindrome(int x)
{

	int rev =0;
	int temp = x;
	while(temp>0)
	{
		rev = rev*10 + temp%10;
		temp = temp/10;
	}

	if(x == rev)
		return 1;

	else
		return 0;
}

int product(int x)
{
	int flag =0;	
	for(int i=999 ;i>=100 ;i--)
	{
		if(x%i ==0 && (x/i) >=100 && (x/i)<=999)
		{
			flag =1;
			break;
		}
	}

	if(flag)
		return 1;
	else
		return 0;
}

int main()
{

	int small = 10000;
	int big = 998001;
	cout<<"here";
	for(int i=big;i>=small ;i--)
	{
		
		int res = ispalindrome(i);
				
		if(res)
		{
			int check = product(i);
			if(check)
			{
				cout<<i;
				break;	
			}
		}

	}

	return 0;

}
	
