#include<iostream>
using namespace std;

int n, m;
void dat(int x) {
	for (int i = 0; i < x; i++) {
		cout << "-";
	}
}
void star() {
	cout << "*";
}
void firstEndLine() {
	dat((m - 1) / 2);
	star();
	dat((m - 1) / 2);
	cout << endl;
}
void midLine() {
	star();
	dat(m - 2);
	star();
	cout << endl;
}
void btwUpLine() {
	int line = (m - 3) / 2;
	for (int i = line; i > 0; i--) {
		dat(i);
		star();
		dat(m - 2 - (2 * i));
		star();
		dat(i);
		cout << endl;
	}
}
void btwDownLine() {
	int line = (m - 3) / 2;
	for (int i = 1; i <= line; i++) {
		dat(i);
		star();
		dat(m - 2 - (2 * i));
		star();
		dat(i);
		cout << endl;
	}
}

int main() {
	cin >> n;
	if (n % 2 == 0) {
		m = n - 1;
	}
	else {
		m = n;
	}
	//cout << n << " " << m;
	if (n == 1) {
		cout << "*";
	}
	else if (n == 2) {
		cout << "*" << endl << "*";
	}
	else if (n >= 3) {
		firstEndLine();
		btwUpLine();

		if (n % 2 == 1) {
			midLine();
		}
		else {
			midLine();
			midLine();
		}

		btwDownLine();
		firstEndLine();
	}

	return 0;
}