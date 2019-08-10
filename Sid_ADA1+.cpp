#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter the number of test cases\n";
	cin >>n;
	int testcase_ans[n];
	for(int i =0;i < n;i++)
	{
		int caselength,key;
		cout <<"\nEnter the number of element in the array\n";
		cin >>caselength;
		int casearray[caselength];
		cout<< "Enter the element of array";
		for(int k= 0 ;k < caselength;k++)
		{
			int value;
			cin>>value;
			casearray[k] = value;
		}
		cout <<"\nEnter the number to be found\n";
		cin>>key;
		for(int j=0;j<caselength;j++)
		{
			if(casearray[j]==key)
			{
				testcase_ans[i]=1;
				continue;
			}
		}
		testcase_ans[i]=-1;
	}
	cout<< "\nThe Search results are \n";
	for(int i=0;i < n;i++)
	{
		cout<<testcase_ans[i]<<"\n";
	}
	return 0;
}
