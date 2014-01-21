//198673
#include<iostream>
using namespace std;

int main()
{
	int num = 380;
	while(1)
	{
		int flag =0;
		for(int i=2;i<=20;i++)
			if(num%i !=0)
			{
				flag =1;
				break;
			}

		if(flag == 0)
		{
			cout<<num;
			break;
		}
		num = num + 1;
	}
}	
		
