#include <iostream>
using namespace std;
int main(){
	int total_amount;
	const float zakat_rate=0.025;
	float zakat_due;
	cout<<" Enter the amount you have: "<<endl;
	cin>>total_amount;
	zakat_due=total_amount*zakat_rate;
	cout<<"The amount of zakat to be paid is: "<<zakat_due<<endl; 
}
