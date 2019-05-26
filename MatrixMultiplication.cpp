#include <iostream.h>
#include <conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],l,k,m,n,i,j,z;
	i=0;j=0;
	cout<<"Enter number of rows and columns for matrix 1"<<endl;
	cin>>l>>k;
	cout<<"Enter elements of matrix"<<endl;
	for(i=0;i<l;i++)
	{
		for(j=0;j<k;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter number of rows and columns for matrix 2"<<endl;
	cin>>m>>n;
	cout<<"Enter elements of matrix"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	if(k==m)
	{
		cout<<"Matrix Multiplication"<<endl;
		for(i=0;i<l;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
				for(z=0;z<m;z++)
				{
					c[i][j]+=a[i][z]*b[z][j];
				}
			}
		}
	for(i=0;i<l;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" "<<c[i][j]<<" ";
		}
	cout<<endl;
	}
	}
	else
	{
		cout<<"Matrix multiplication not possible"<<endl;
	}
	getch();
	}
