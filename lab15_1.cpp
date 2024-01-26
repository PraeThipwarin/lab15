#include <iostream>
using namespace std;

int main(){
	int a = 5;
	string b = "A";
	string &c = b;
	int *x = &a;
	string *y = &b;
	int **z = &x;

	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	cout<<&a<<" "<<&b<<" "<<&c<<" "<<&x<<" "<<&y<<" "<<&z<<endl;
	c = "F";
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	string w = "W";
	*y = w;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	*x = 6;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	**z = 7;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	return 0;
}
