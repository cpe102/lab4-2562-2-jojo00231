#include<iostream>
#include<cmath>
using namespace std ;

int main(){
    double x ;
	cout << "Enter x = ";
    cin >> x ;
    x = (3*x*x*x) + 2*2.71828 + pow(2,(2*x)+1) + sqrt((x*x)+1) ;
    cout << "Result y = " << x ;

    return 0 ;
}