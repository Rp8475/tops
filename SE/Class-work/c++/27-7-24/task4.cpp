#include<iostream>
using namespace std;


main()
{
	int n,i,j,temp,c;
	
		cout<<"enter your range.="; 
			cin>>n;
	int a[n];
	
		for(i=0;i<n;i++)
		{
			cout<<"enter your no.=";
			cin>>a[i];
		} 
	cout<<"1.ass"<<endl;
	cout<<"2.des ";
	cin>>c;
	
	if(c==1){
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<endl;	
	}
		
}
	else if(c==2)
	{
			for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	    
	}
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<endl;	
	}
	}
	else
	{
		cout<<"enter valid choice";
	}
	
	
}
	

