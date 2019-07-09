#include<bits/stdc++.h>
using namespace std;
main()
{
	int t; 
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double a[n];double avg=0;
		for(int i=0;i<n;i++){
		 cin>>a[i];avg+=a[i];
     	}
		float sum=avg;
		avg=avg/n;
		
		
		
		int flag=0;
		for(int i=0;i<n;i++)
		{
			sum=sum-a[i];
			sum=sum/(n-1);
			if(sum==avg) {
			cout<<i+1<<endl;
			flag=1;
			break;
		}
		
	}if (flag==0) cout<<"Impossible"<<endl;
}}
