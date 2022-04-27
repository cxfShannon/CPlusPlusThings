#include<iostream>
using namespace std;

enum weekday {
	Sunday=7,Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday
};

int main() {
	enum weekday wek = Wednesday;
	cout << "wek:" << wek << endl;
	for (weekday i = wek; i <= Sunday; i = (weekday)(i+1) ) {
		cout << i << endl;
		wek = weekday(wek + 1);
		if (wek == Friday) {
			cout << "if (wek == Friday)\n";
		}
		else if (wek == Saturday) {
			cout << "if (wek == Saturday)\n";
		}
		cout << "----------" << endl;
	}
	return 0;
}
