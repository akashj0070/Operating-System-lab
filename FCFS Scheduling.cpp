#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
main()
{    
  int pr;
  cout<<"Enter no. of processes\n\n";
  cin>>pr;
	int at[pr],wt[pr],et[pr],ct[pr],tat[pr];
	cout<<"Enter Arrival time of all the processes\n\n";
	for(int i=0;i<pr;i++) cin>>at[i];
	cout<<"Enter Execution or burst time of processes\n\n";
	for(int i=0;i<pr;i++) cin>>et[i];
	
	//Completion time
	ct[0]=et[0];
	
	for(int i=1;i<pr;i++) 
	{
		if(at[i]>ct[i-1])
		ct[i]=at[i]+et[i];
		else
		ct[i]=ct[i-1]+et[i];
	}
	
		for(int i=0;i<pr;i++)
	tat[i]=ct[i]-at[i];
		
	for(int i=0;i<pr;i++)
	wt[i]=tat[i]-et[i];

	
	
		cout<<"TAT time    Waiting time      completion time\n";
	for(int i=0;i<pr;i++)
	cout<<tat[i]<<"           "<<wt[i]<<"                  "<<ct[i]<<endl<<endl;
	

	getch();
	
}
