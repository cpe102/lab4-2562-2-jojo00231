#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x){
    int i=2;
    
    while(x>0){
		if(x%i ==0){
			return i;
		}
		i++;
	}
}

	

int main()
{
    cout << findDivisor(10) << endl ;
	cout << findDivisor(97) << endl ;
	cout << findDivisor(13) << endl ;

    return 0 ;
}

