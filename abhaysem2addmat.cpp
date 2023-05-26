#include <iostream>
using namespace std;

int main()
{
	int row, col, a[50][50],b[50][50],mat[50][50],i,j;
	cout<<"number of rows:";
	cin>>row;
	cout<<"number of columns:";
	cin>>col;
	cout<<endl;
	cout <<"first matrix "<<endl;
	for (i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			cout <<"element a"<<i+1<<j+1<<":";
			cin>> a[i] [j];
		}
	cout <<"second matrix "<< endl ;
	for (i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			cout <<"element b"<<i+1<<j+1<<":";
			cin>> b[i] [j];
		}	
	//adding two matrices
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
		mat[i][j]=a[i][j]+b[i][j];
	
	cout<<"addition of two matrices "<<endl ;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			cout <<mat[i][j] << " ";
			if(j==col-1)
				cout << endl;
		}	
return 0;
}
