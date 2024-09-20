#include<iostream>
using namespace std;
main()
{
	float mega,kilo,bytes;
	float bits;
	cout<<"Enter the size in megabytes (MB): ";
	cin>>mega;
	kilo=mega*1024;
	bytes=kilo*1024;
	bits=bytes*8;
	cout<<mega<<" MB is equal to "<<bits<<" bits";
}