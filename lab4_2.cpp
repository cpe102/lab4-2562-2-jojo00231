#include<iostream>

using namespace std;

double findDistance(double u, double a, double t)
{
  return ((u*t)+(0.5*a*t*t)) ;
}

int main(){

 cout << findDistance(0,0.5,1) ;

  return 0;
}
