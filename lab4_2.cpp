#include<iostream>

using namespace std;

double findDistance(double u, double a, double t)
{
  return ((u*t)+(0.5*a*t*t)) ;
}

int main(){

 cout << findDistance(0,0.5,1) << endl ;
 cout << findDistance(1.5,-1,2) << endl ;
 cout << findDistance(5,4,3) << endl ;
  return 0;
}
