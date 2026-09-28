#include<iostream>
using namespace std;
int main(){
	int a,b, c;
	cout <<"first length :\n";
	cin >> a;
	cout <<"second length :\n";
    cin >> b;
	cout <<"third length :\n";
    cin >> c;
	if(a<(b+c) && b < (a +c) && c < a+b){
	cout << "this are sides of traingle " << endl;
}	else{
	cout <<"this are not sides of triangle" << endl;
	}

}
