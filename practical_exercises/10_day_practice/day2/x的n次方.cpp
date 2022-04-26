#include<iostream>
using namespace std;
double power(double x, int n);

void main() {
	int x, n;
	int wei = 0;
	int sum = 0;
	int each, chu;

	cout << "算x的n次方，输入x：" << endl;
	cin >> x;
	cout << "继续输入n：" << endl;
	cin >> n;
	sum = power(x, n);
	cout << x << "的" << n << "次方为：" << sum << endl;
}

double power(double x, int n) {
	double val = 1.0;
	while (n--)
	{
		val *= x;
	}
	return val;
}
