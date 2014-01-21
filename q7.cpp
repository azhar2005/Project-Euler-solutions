// 171313
#include<iostream>
using namespace std;

int main()
{
	int num=2;
	int count =0;	
		
	while(1)
	{
		int flag =0;
		int i;
		for( i=2;i<=(num/2);i++)
			if(num %i ==0)
			{
				flag =1;
				break;
			}

		if(!flag)
		{
			count = count +1;
		}
		if(count ==10001)
		{
			cout<<num;
			break;
		}
			
		else
			num = num +1;

	}

}
