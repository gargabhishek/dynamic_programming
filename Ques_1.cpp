#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=20;
	//cin>>n;
	int arr[n]={375,40,854,203,203,
				156,362,279,812,955,
				600,947,978,46,100,
				953,670,862,568,188};
	for (int i=0;i<n;i++)
	{
		cout<< arr[i]<<endl;
	} 
	cout<<endl;
	int a[n-1];
	for(int i=0;i<n-1;i++)
	{
		a[i] = arr[i]-arr[i+1] ;
	//	cout<<a[i]<<endl;
	}
	int res=1;
	for(int i=0;i<n-1;i++)
	{   
		bool temp1=1,temp2=1;
		if(a[i]<=0)
			temp1=0;
		if(a[i+1]<=0)
			temp2=0;
		//cout<<temp1<<endl;
		if(a[i]!=0)
			if(temp1!=temp2)
				{
					res++;
				}
		//cout<<a[i]<<endl;
	}
		
	cout<< "Desired result output is "<<res;
	getch();
	return 0;
}
