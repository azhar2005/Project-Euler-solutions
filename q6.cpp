//200235
#include<iostream>
using namespace std;

int main()
{

	int squaresum=0,sum=0;

	for(int i=1;i<=100;i++)
	{
		sum = sum + i;
		squaresum = squaresum + i*i;
	}

	cout<<((sum*sum)-squaresum);

}
