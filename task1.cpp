#include<iostream>
using namespace std;
int main(){
int a;
	cout<<"enter the number: " ;
	cin>>a;
	int num1=(a/10000);
	
	int num2=((a/1000)%10);
	
	int num3=((a/100)%10);
	
	int num4=((a/10)%10);
	
	int num5=((a%10));
	cout<<num5<<endl;
	cout<<num4<<endl;
	cout<<num3<<endl;
	cout<<num2<<endl;
	cout<<num1<<endl;
}
