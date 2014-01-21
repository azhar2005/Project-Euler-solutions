//81588
#include<iostream>
using namespace std;
int main()
{
	long arr[21][21];
	int i,j;	
	for(i=0;i<21;i++)
		for(j=0;j<21;j++)
			arr[i][j] =0;

	//last row
	for(i=0;i<20;i++)
		arr[20][i] =1;

	// right column
	for(i=0;i<20;i++)
		arr[i][20] =1;

	for(i=19;i>=0;i--)
		for(j=19;j>=0;j--)
			arr[i][j] = arr[i][j+1] + arr[i+1][j] ;


/*	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<arr[i][j]<<".";
		cout<<endl;
	}	 
*/
	cout<<"value required : "<<arr[0][0];

}
