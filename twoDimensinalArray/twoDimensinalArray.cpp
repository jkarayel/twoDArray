#include <iostream>
using namespace std;

int main()
{
	int x[4][3] = { 0 };
	int lenC = (sizeof(x[0]) / sizeof(int));
	int lenR = (sizeof(x) / sizeof(int)) / lenC;
	for (int r = 0; r < lenR - 1 ; r++) {
		for (int c = 0; c < lenC - 1; c++)
		{
			cout << "please enter index at row " << r + 1 << " column " << c + 1 << " ==> ";
			cin >> x[r][c];
			x[r][lenC - 1] += x[r][c];
			x[lenR - 1][c] += x[r][c];
		}
		x[lenR-1][lenC-1] += x[r][lenC-1];
		cout << endl;
	}

	for (int r = 0; r < lenR; r++) {
		for (int c = 0; c < lenC; c++) {
			cout << x[r][c] << " ";
		}
		cout << endl;
	}

}
