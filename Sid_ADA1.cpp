#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter the number of vales \n";
	cin >>n;
	int largest=0;
	int val =1;
	cout<< "Enter the numbers \n";
	for(int i=0;i<5;i++)
	{
		cin>>val;
		if ( val > largest)
		{
			largest = val;
		}
	}
	cout<<"/n The largest number is "<<largest<<"\n";
	return 0;
}
