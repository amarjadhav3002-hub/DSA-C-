#include<iostream>
using namespace std;
int factorial(int n){
	int fact = 1;
	for(int i=n; i>=1 ; i--){
	fact *=i;
	}
	return fact;

}
int ncr(int n ,int r){
	int fact_n = factorial(n);
	int fact_r = factorial(r);
	int fact_nmr = factorial (n-r);

	return fact_n /(fact_r * fact_nmr);
}

int main (){
	int n , r;
	cout <<"value of n is : " ;

	cin >>n;
	cout <<"value of r is : " ;
    cin >>r;
 ncr(n,r);
 cout << "factorial of number is : " << ncr(n,r)<<endl;
 return 0;

}
