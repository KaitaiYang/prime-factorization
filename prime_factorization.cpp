#include <iostream>
using namespace std;

int MinFact(int n) {
	int i = 2;
	for(i; i <= n; i++) {
		if(n % i == 0) {
			return i;
		}
	}
}

int main() {
	
	int n;
	int factor;

	cout<<"Please input an integer: ";
	cin>>n;

	cout<<n<<"=";

	while(n != 1) {
		factor = MinFact(n);
		n /= factor;

		if(n != 1) {
			cout<<factor<<"*";
		} else {
			cout<<factor<<"."<<endl;
		}
		
	}

	return 0;
}