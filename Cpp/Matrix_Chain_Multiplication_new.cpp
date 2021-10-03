								/*Program to solve Matrix Chain Multiplication Problem using Dynamic Programming*/
#include<bits/stdc++.h>
using namespace std;

class store
{
	public :
		int val;
		int l;
		int m;
		int r;
};

class matrix
{
	public:
		store arr[20][20];
};

void print_optimal_parenthesis(matrix m,int i,int j)
{
	if(i==j)
		cout<<"A"<<i;
		
	else
	{
		int a=m.arr[i][j].l,b=m.arr[i][j].m,c=m.arr[i][j].r;
		
		
		cout<<"(";
		print_optimal_parenthesis(m,a,b);
		cout<<"X";
		print_optimal_parenthesis(m,b+1,c);
		cout<<")";
	}
}

void minimum_cost(int rank[],int n)
{
	matrix  m;
	int c,d,i,j,k;
	
	for(i=1;i<=n;i++)
		m.arr[i][i].val=0;
		
	for(d=1;d<=n-1;d++)
	{
		for(i=1;i<=n-d;i++)
		{
			j=i+d;
			m.arr[i][j].val=INT_MAX;
			for(k=i;k<=j-1;k++)
			{
				c=m.arr[i][k].val+m.arr[k+1][j].val+rank[i-1]*rank[k]*rank[j];
				
				if(c<m.arr[i][j].val)
				{
					m.arr[i][j].val=c;
					m.arr[i][j].l=i;
					m.arr[i][j].m=k;
					m.arr[i][j].r=j;
				}
				
			}
		}
	}
	
	cout<<"\nThe minimum cost of multiplication is :"<<m.arr[1][n].val;
	
	cout<<"\nthe optimal parenthisization will be -\n";
	
	print_optimal_parenthesis(m,1,n);
}

int main(void)
{
	int n,i,r,c;
	cout<<"\nEnter the number of matrices-";
	cin>>n;
	
	int rank[n+1];
	
	cout<<"\nPut the sequence of dimensions:";
	for(i=0;i<=n;i++)
	{
		cin>>rank[i];
	}
	
	
	minimum_cost(rank,n);
	
	return 0;
}
	

