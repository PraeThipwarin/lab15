#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d) {
    int A[] = {a, b, c, d};
    int n = sizeof(A) / sizeof(A[0]);
    if (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            int j = i + rand()%(n - i);
            int t = A[j];
            A[j] = A[i];
            A[i] = t;
        }
    }
    a = A[0];
    b = A[1];
    c = A[2];
    d = A[3];
}