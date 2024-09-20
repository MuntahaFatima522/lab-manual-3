#include<iostream>
using namespace std;
main()
{
	string name;
	float matric,inter,ecat;
	float matric_percent,inter_percent,ecat_percent;
	float aggregate;
	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>matric;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>inter;
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>ecat;
	matric_percent=matric/1100*100*0.1;
	inter_percent=inter/550*100*0.4;
	ecat_percent=ecat/400*100*0.5;
	aggregate=matric_percent+inter_percent+ecat_percent;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}
	