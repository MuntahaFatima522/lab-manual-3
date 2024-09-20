#include<iostream>
using namespace std;
main()
{
	int hour,min,sec;
	cout<<"Enter the number of hours: ";
	cin>>hour;
	min=hour*60;
	sec=min*60;
	cout<<hour<<" hours is equivalent to "<<sec<<" seconds";
}