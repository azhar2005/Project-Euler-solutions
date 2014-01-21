//a+b+c =1000
//1^2 + b^2 = c^2

#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	for(i=1;i<=998;i++)
	{
		for(j=1;j<=998;j++)
		{
			for(k=1;k<=998;k++)
			{
				if (i +j+k ==1000)
				{
					int a = i*i;
				//	cout<<"\nsq of i " <<a;
					int b = j*j;
				//	cout<<"\n sq of j :"<<b;
					int c = k*k;
				//	cout<<"\n sq of k: "<<c;
					int r = c -a -b;
				//	cout<<"\nc -a -b "<<r;
					if (r == 0)
					{
						cout<<endl<<"i j k :"<<i<<" "<<j<<" "<<k;
						cout<<endl<<i*j*k;
						return 0;
					}						
				}
			}
		}

	}

	return 0;

}
