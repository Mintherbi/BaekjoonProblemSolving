#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T[1000000];
	int n;

	cin >> n;

	for(int i=0; i<n ; i++)
	{
		int a, b;
		cin >> a >> b;
		T[i] = a + b;
	}

	for (int j=0; j<n ; j++)
	{
		cout << T[j] << '\n';
	}

	return 0;
}
