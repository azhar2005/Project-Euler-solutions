//66013
#include<iostream>

using namespace std;

int main()
{
	int i,j,k;
	int divsum1=0,divsum2=0;
	long sum =0;
	int arr[10000];
	int flag =0;	
	for(i=2;i<10000;i++)
	{
		//cout<<"number : "<<i<<endl;
		flag =0;
		divsum1 =0;
		for(j=1;j<=i/2;j++)
			if(i%j==0)
				divsum1 = divsum1 + j;
		arr[i] = divsum1;		

		//cout<<divsum1;
	/*
		for(k=2;k<10000;k++)
		{
			divsum2 =0;
			for(j=1;j<=k/2;j++)
				if(k%j==0)
					divsum2 = divsum2 + j;
			if(divsum2 == divsum1)
			{
				sum = sum + k;
				flag =1;
			}
		}
	
		if(flag)
			sum = sum + i;
	*/
	
	}
							//d(a) = b && d(b)=a
	arr[0] = 1;
	arr[1] = 0;
	for(i=2;i<10000;i++)
	{
		int temp = arr[i];
		if(temp <10000 && arr[temp] == i && temp!=i)	
		{
			cout<<"a: "<<i<<" b : "<<temp<<endl;
			arr[i]=-1;
			arr[temp] =-1;
			sum = sum + i + temp;
		}			
	}


			

	cout<<"sum is"<<sum;

} 
