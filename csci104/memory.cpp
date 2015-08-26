#include <iostream>

using namespace std;

int main()
{
	int n;
	double *x;
	cin >> n;
	cout << n << '\n';
	x = new double[n];
	for(int i=0; i<n; ++i) {
		x[i] = 0.l;
		cout << *(x+i) << '\n';
	}
	return 0;
}
