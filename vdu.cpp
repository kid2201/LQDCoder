#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double f = 9.12345;
	cout<<setprecision(7)<<f;
	
	cout<<endl<<"Dung fixed:"<<endl;
	cout<<fixed<<setprecision(7)<<f;
	
}
