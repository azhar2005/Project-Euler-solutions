//103161
#include<iostream>
using namespace std;

int main()
{
	int arr[1000];
	int i,k;
	int carry =0;
	long sum;
	for(i =0;i<1000;i++)
		arr[i] =0;

	arr[0] =1;
	for(i=1;i<=1000;i++)
	{
		k =0;
		while(k<1000)		
		{
			arr[k] =  arr[k] *2 + carry;		
			if(arr[k]<10)
				carry =0;				
			else if(arr[k]>=10)
			{
				carry = arr[k]/10;
				arr[k] = arr[k]%10;
			}
			k = k+1;
		}	
	}

	for(i=0;i<=1000;i++)
		sum = sum + arr[i];

	cout<<"sum is "<<sum;

	return 0;
}
