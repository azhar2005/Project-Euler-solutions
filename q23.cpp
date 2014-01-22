//46948
// Boolean array inspired from : www.mathblog.dk/project-euler-23-find-positive-integers-not-sum-of-abundant-numbers/4212720 

#include <iostream>
#include<stdio.h>
#include<math.h>
#include<vector>

using namespace std;

int check(int x)
{
	vector<int> v;
	int i,sum=0;
	int k;
	for(i=0;i<=x/2;i++)
		v.push_back(-1);	
	


	for(i=1;i<=x/2;i++)
	{
		if(x%i==0)
		{
			int temp = x;
			v[i] = 0;			
			while(temp%i==0 && i!=1 && v[1]==-1)
			{
				v[i] = v[i] +1;
				temp = temp/i;
			}
	
			for(k=v[i];k>0;k--)
			{
				v[pow(i,k)] = 1;
			}		
				
		}
	}

	for(i=1;i<=x/2;i++)
	{
		if(v[i]>=0)
		sum = sum + i;			
	}

	if(sum > x)
		return 1;
	else
		return 0;

}




int main()
{
	int limit = 28123;
	int n;
	int i,k;	
	long sum =0;
	vector<int> abundant;
	bool  *canBeWrittenasAbundent ;
	canBeWrittenasAbundent = new bool[limit + 1];


	for(i=1;i<limit;i++)
	{
			
		if(check(i))
		{	
			abundant.push_back(i);
		}	

	}

	
	for(i=0;i<abundant.size();i++)
	{
		for(k=i;k<abundant.size();k++)
			if(abundant[i]+abundant[k]<limit)
				canBeWrittenasAbundent[ abundant[i]+abundant[k] ] = true;
			else
				break;

	}


	for (int i = 1; i < limit; i++) 
	{
    	if (!canBeWrittenasAbundent[i]) 
		{
 	       sum += i;
    	} 
	}		


	cout<<"\n sum is : "<<sum;

	return 0;

}
