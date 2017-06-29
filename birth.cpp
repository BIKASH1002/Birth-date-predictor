# Birth-date-predictor
Gives birth date by showing some matrix
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a[4][4],b[5],k=0;
	char choice;
	
	a[0][0]=1,a[0][1]=3,a[0][2]=5,a[0][3]=7;
	a[1][0]=9,a[1][1]=11,a[1][2]=13,a[1][3]=15;
	a[2][0]=17,a[2][1]=19,a[2][2]=21,a[2][3]=23;
	a[3][0]=25,a[3][1]=27,a[3][2]=29,a[3][3]=31;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<"\n";	
	}
	cout<<"\n Enter 'Y' or 'y' if your birth date is here else enter 'N' or 'n':";
	cin>>choice;
	if(choice=='Y' || choice=='y')
	{
		b[k]=1;
		k++;	
	}
	else
	{
		b[k]=0;
		k++;
	}
	
	
	a[0][0]=2,a[0][1]=3,a[0][2]=6,a[0][3]=7;
	a[1][0]=10,a[1][1]=11,a[1][2]=14,a[1][3]=15;
	a[2][0]=18,a[2][1]=19,a[2][2]=22,a[2][3]=23;
	a[3][0]=26,a[3][1]=27,a[3][2]=30,a[3][3]=31;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<"\n";	
	}
	cout<<"\n Enter 'Y' or 'y' if your birth date is here else enter 'N' or 'n':";
	cin>>choice;
	if(choice=='Y' || choice=='y')
	{
		b[k]=1;
		k++;	
	}
	else
	{
		b[k]=0;
		k++;
	}
	
	
	a[0][0]=4,a[0][1]=5,a[0][2]=6,a[0][3]=7;
	a[1][0]=12,a[1][1]=13,a[1][2]=14,a[1][3]=15;
	a[2][0]=20,a[2][1]=21,a[2][2]=22,a[2][3]=23;
	a[3][0]=28,a[3][1]=29,a[3][2]=30,a[3][3]=31;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<"\n";	
	}
	cout<<"\n Enter 'Y' or 'y' if your birth date is here else enter 'N' or 'n':";
	cin>>choice;
	if(choice=='Y' || choice=='y')
	{
		b[k]=1;
		k++;	
	}
	else
	{
		b[k]=0;
		k++;
	}
	
	
	a[0][0]=8,a[0][1]=9,a[0][2]=10,a[0][3]=11;
	a[1][0]=12,a[1][1]=13,a[1][2]=14,a[1][3]=15;
	a[2][0]=24,a[2][1]=25,a[2][2]=26,a[2][3]=27;
	a[3][0]=28,a[3][1]=29,a[3][2]=30,a[3][3]=31;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<"\n";	
	}
	cout<<"\n Enter 'Y' or 'y' if your birth date is here else enter 'N' or 'n':";
	cin>>choice;
	if(choice=='Y' || choice=='y')
	{
		b[k]=1;
		k++;	
	}
	else
	{
		b[k]=0;
		k++;
	}
	
	
	a[0][0]=16,a[0][1]=17,a[0][2]=18,a[0][3]=19;
	a[1][0]=20,a[1][1]=21,a[1][2]=22,a[1][3]=23;
	a[2][0]=24,a[2][1]=25,a[2][2]=26,a[2][3]=27;
	a[3][0]=28,a[3][1]=29,a[3][2]=30,a[3][3]=31;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<"\n";	
	}
	cout<<"\n Enter 'Y' or 'y' if your birth date is here else enter 'N' or 'n':";
	cin>>choice;
	if(choice=='Y' || choice=='y')
	{
		b[k]=1;
		k++;	
	}
	else
	{
		b[k]=0;
		k++;
	}
	
	int sum=0;
	for(int l=k-1;l>=0;l--)
	sum+=pow(2,l)*b[l];
	
	cout<<"Your birthdate is:"<<sum;
	return 0;
}
