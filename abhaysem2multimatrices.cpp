#include <iostream>
using namespace std;

int main()
{
	int r1,r2,c1,c2, a[50][50],b[50][50],mat[50][50],i,j;
	cout<<"number of rows in first matrix:";
	cin>>r1;
	cout<<"number of columns in first matrix:";
	cin>>c1;
	cout<<endl;
	cout<<"number of rows in second matrix:";
	cin>>r2;
	cout<<"number of columns in second matrix:";
	cin>>c2;
	cout<<endl;
	cout <<"first matrix "<<endl;
	for (i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		{
			cout <<"element a"<<i+1<<j+1<<":";
			cin>> a[i] [j];
		}
	cout <<"second matrix "<< endl ;
	for (i=0;i<r2;i++)
		for(j=0;j<c2;j++)
		{
			cout <<"element b"<<i+1<<j+1<<":";
			cin>> b[i] [j];
		}	
	// multiplying matrices
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		for(j=0;j<c2;j++)
		{
			mat[i][j]=0;
			for(int x=0;x<c1;x++)
			mat[i][j]+=a[i][j]*b[i][j];
		}
		for(i=0;i<r1;i++){
		
			for(j=0;j<c2;j++)
				cout << mat[i][j]<< " ";
			cout<< endl;
	}
		
	}
return 0;
}
