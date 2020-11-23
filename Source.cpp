#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;void Print(int** a, const int m, const int n)
{
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}void Input(int** a, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
		cout << endl;
	}
}void Sims(int** a, const int m, const int n, int i, int sim, const int j)
{
	if (m-j == m-i)
		sim = true;
	if (a[m-j][m-i] != a[m-i][m-j])
		sim = false;
	if (i < n - 1)
	{
		cout << endl;
		Sims(a, m, n + 1, i, sim, j);
	}
	else
		if (i < m - 1)
			Sims(a, m + 1, n, i, sim, j);
		else
			cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	int Low = -17;
	int High = 15;
	int m, n;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	int** a = new int* [m];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];
	Input(a, m, n);
	Print(a, m, n);
	bool sim = true;
	int i=0, j=0;


	if (n == m)
	{
		
		if (m - j == m - i)
			sim = true;
		if (a[m - j][m - i] != a[m - i][m - j])
			sim = false;
		
		if (sim == true)
			cout << "mas is sim" << endl;
		if (sim == false)
			cout << "mas isn`t sim" << endl;
	}
	return 0;
}