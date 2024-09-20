#include<iostream>
using namespace std;
main()
{
	int population,n,y,d,total;
	cout<<"Enter current world population: ";
	cin>>population;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>n;
	//y=birth rate in year
	//d=birth rate in three decades
	y=n*12;
	d=y*30;
	total=d+population;
	cout<<"The population in three decades will be: "<<total;
}