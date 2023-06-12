#include<iostream>
using namespace std;
int main(){
	double s1,s2,s3,s4,s5,sum;
	sum=0;
	cout<<"Enter the marks of subject one: ";cin>>s1;
	cout<<"Enter the marks of subject two: ";cin>>s2;
	cout<<"Enter the marks of subject three: ";cin>>s3;
	cout<<"Enter the marks of subject four: ";cin>>s4;
	cout<<"Enter the marks of subject five: ";cin>>s5;
	sum =s1+s2+s3+s4+s5;
	double percentage= (sum*100)/500;
	cout<<"The total percentage obtained is: "<<percentage<<"%"; 
}
