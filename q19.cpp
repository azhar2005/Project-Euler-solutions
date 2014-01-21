//61259
#include<iostream>
using namespace std;

int main()
{
	
	int day =0;
	int month;
	int i,j;
	int count =0;

	for(i=1900 ;i<=2000;i++)
	{
		if(i==1901)
			count =0;		
		for(j=1;j<=12;j++)
		{
			switch(j)
			{
				case 1: if(day==6)			//jan
							count++;
						day = (day + 3) % 7;
						break;

				case 2: if((i%100 ==0 && i%400 ==0) || (i%100!=0 && i%4==0))	//leap year feb
						{
							if(day==6)
								count++;
							day = (day +1)% 7;
						}
						else						//non leap feb
							if(day ==6)
								count++;
						break;

				case 3: if(day==6)					//march 31
							count++;
						day = (day + 3) % 7;
						break;
	
				case 4: if(day==6)					//april 30
							count++;
						day = (day + 2) % 7;
						break;

				case 5: if(day==6)					//may 31
							count++;
						day = (day + 3) % 7;
						break;

				case 6: if(day==6)					//jun 30
							count++;
						day = (day + 2) % 7;
						break;

				case 7: if(day==6)					//jul 31
							count++;
						day = (day + 3) % 7;
						break;

				case 8: if(day==6)					//aug 31
							count++;
						day = (day + 3) % 7;
						break;

				case 9: if(day==6)					//sept 30
							count++;
						day = (day + 2) % 7;
						break;

				case 10: if(day==6)					//oct 31
							count++;		
						day = (day + 3) % 7;
						break;
				
				case 11: if(day==6)					//NOV 30
							count++;		
						day = (day + 2) % 7;
						break;
	
				case 12: if(day==6)					//dec 31
							count++;		
						day = (day + 3) % 7;
						break;
			}
		}
	}

cout<<"\n count is : "<<count;
return 0;

}
