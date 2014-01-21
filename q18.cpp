//66582
#include<iostream>

using namespace std;

int great(int a,int b)
{
	if (a>=b)
		return a;
	return b;
}

int main()
{
	int n=15;
	int i,j;
	int arr[15][15];
	for(i=0;i<15;i++)	
		for(j=0;j<=i;j++)
			cin>>arr[i][j];


	for(i=13;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			arr[i][j] = arr[i][j] + great(arr[i+1][j],arr[i+1][j+1]);
		}
	}


	cout<<"Value required : "<<arr[0][0];
// display array
/*	for(i=0;i<15;i++)	
	{
		for(j=0;j<=i;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
*/
	return 0;

}
