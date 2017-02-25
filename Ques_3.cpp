#include<iostream>
using namespace std;

int LIS( int arr[], int n )          // longest increasing subsequence in arr[]
{
    int lis[n],temp, max = 0 ;
 
    for (int i = 0; i < n; i++ )          // initialise lis value to 1..
        lis[i] = 1;
 
    for (int i = 1; i < n; i++ )        
        for (int j = 0; j < i; j++ ) 
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
 
    for (int i = 0; i < n; i++ )
        if (max < lis[i]) 
		{
			max = lis[i];            // Maximum of all LIS values..
			temp = i;                // temp is maximum value index..			
		} 
	//cout<<temp<<endl;               
    int temp2 = arr[0],k=n-1,s=0;
	while(temp2>arr[k])                   //checking for circular array case.. 
	{
		temp2 = arr[k];
		k--;
		s++;	
	}   
 	//cout<<"  "<<temp2<<"  "<<k<<endl;
    return (max+s);
}
 
int main()
{
    int n;
    cout<<"enter the no of element "<<endl;
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    cout<<"Length of LIS is "<< LIS( arr, n );	
    return 0;
}
