//67599
#include<iostream>
using namespace std;

int singles(int k)
{
	switch(k)
	{
		case 0: return 0;
				break;		
		case 1: return 3;
				break;
		case 2: return 3;
				break;
		case 3: return 5;
				break;
		case 4: return 4;
				break;
		case 5: return 4;
				break;
		case 6: return 3;
				break;
		case 7: return 5;
				break;
		case 8: return 5;
				break;
		case 9: return 4;
				break;
	}
}

int tens(int k)
{
	switch(k)
	{
		case 10: return 3;
				 break;
		case 11: return 6;
				 break;
		case 12: return 6;
			 	 break;
		case 13: return 8;
				 break;
		case 14: return 8;
				 break;
		case 15: return 7;
				 break;
		case 16: return 7;
				 break;
		case 17: return 9;
				 break;
		case 18: return 8;
				 break;
		case 19: return 8;
				 break;
	}
}


int tener(int k)
{
	switch(k)
	{
		case 2: return 6;
				break;
		case 3: return 6;
				break;
		case 4: return 5;
			 	break;
		case 5: return 5;
				break;
		case 6: return 5;
				break;
		case 7: return 7;
				break;
		case 8: return 6;
			    break;
		case 9: return 6;
				break;

	}
}


int main()
{
	int i;
	long sum = 0;
	for(i=1;i<1000;i++)
	{
		if(i<100)
		{
			
			if(i<10)
				sum = sum + singles(i);
			else if(i>=10 && i<20)
				sum = sum + tens(i);
			else if(i>=20)
				sum = sum + tener(i/10) + singles(i%10);
			//cout<<"\n here 1 "<<sum;		
		}
	
		if(i>=100)
		{
			//cout<<"\n here @";
			if(i%100==0)
				sum = sum + singles(i/100) + 7;
			else
			{
				if(i%100 <10)
					sum = sum + singles(i/100) + 7 + 3 + singles(i%100);
				if(i%100>=10 && i%100 <20)
					sum = sum + singles(i/100) + 7 + 3 + tens(i%100);
				else if(i%100 >=20)
					sum = sum + singles(i/100) + 7 + 3 + tener((i%100)/10) + singles(i%10);	
			}
		}
	}

	sum = sum + 11; //one thousand

	cout<<"sum is : "<<sum<<endl;

	return 0;
}
