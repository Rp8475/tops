#include<iostream>
using namespace std;


main()
{
	int i,j,n,o;
	
		cout<<"enter number = ";
		cin>>n;
		
		
	for(i=1;i<=n;i++) //raw
	{
	 for(j=1;j<=n-i;j++)  //colum
	 {
	 cout<<" ";
	 }
	 for(o=1;o<=i;o++)
	 {
	 	cout<<"* ";
	 }
        cout<<endl;
}
}
