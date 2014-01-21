#include<iostream>
using namespace std;

int main()
{
	int arr[1000];
	int i,j;
	int carry = 0;
	long sum = 0;

	for(i=0;i<1000;i++)
		arr[i] =0;


	arr[0]=1;

	for(i=1;i<=11;i++)
	{
		j=0;
		while(j<1000 && i%10!=0)
		{
			arr[j] = arr[j] *(i%10)	+ carry;
			if(arr[j]<10)
				carry =0;				
			else if(arr[j]>=10)
			{
				carry = arr[j]/10;
				arr[j] = arr[j]%10;
			}	
			
			j = j+1;
		}
		
		if(i==11)
		//for(int k=0;k<10;k++)
		//	cout<<arr[k]<<"..";	
		carry =0;
		j=0;
		if(i>10)
		while(j<10)
		{
			cout<<"arr[j+1] = "<<arr[j+1]<<" j is : "<<j<<" arr[j] is : "<<arr[j]<<" i/10 is : "<<i/10<<" carry is : "<<carry<<endl;
			arr[j+1] = arr[j+1]+arr[j] *(i/10)	+ carry;
			
			if(arr[j+1]<10)
				carry =0;				
			else if(arr[j+1]>=10)
			{
				carry = arr[j+1]/10;
				arr[j+1] = arr[j+1]%10;
			}	
			
			j = j+1;
		}
	} 

	for(i=0;i<1000;i++)
		sum = sum + arr[i];

//for(i=0;i<1000;i++)
//	cout<<arr[i]<<"..";
	cout<<"\n sum required is : "<<sum;

	return 0;

}
