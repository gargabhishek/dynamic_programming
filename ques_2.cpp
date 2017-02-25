#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[1][4] = {0,0,5,5};   // point initial(0,0) to final (5,5)
	int height = a[0][2] - a[0][0];
	int width = a[0][3] - a[0][1];
	int dp[height][width]={0,0,0,0,0};
	
	//dp[0][0]=0;
	int b[1][4] = {0,0,0,1};  // a,b,c,d values just to initialise for testing.. 
	for(int i=1;i<height;i++)
	{   if(b[0][0]==i-1 && b[0][1]==0 && b[0][2]==i && b[0][3]==0 )
		{
			break;
	  	}  
		dp[i][0]=1;               // initialise dp table for some path node (height)
	}
	
	for(int i=1;i<width;i++)
	{
		if(b[0][0]==0 && b[0][1]==i-1 && b[0][2]==0 && b[0][3]==i )
			break;
		else	 
			dp[0][i]=1;              //  initialise dp table for some path node (width)
	}
	
	for(int i=1;i<height;i++)
	{
		for(int j=1;j<width;j++)
		{
			if(b[0][0]==i && b[0][1]==j-1 && b[0][2]==i && b[0][3]==j )
				dp[i][j] = dp[i-1][j] ;
			else if (b[0][0]==i-1 && b[0][1]==j && b[0][2]==i && b[0][3]==j)
				dp[i][j] = dp[i][j-1] ;
			else
				dp[i][j] = dp[i-1][j] + dp[i][j-1];  //dynamic value stored in the matrix
		}
	}
/*	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			cout<<"  "<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
*/	
	cout<< "Number of distinct path is "<<dp[width-1][height-1];
	getch();
	return 0;	 
}
