#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int len;
	int T[1000000];

	cin >> len;

	for (int i = 0; i < len ; i++)
	{
		int a,b;
		cin>> a >>b;
		T[i] = a + b;
	}

	for (int j = 0; j < len ; j ++)
	{
		cout << "Case #" << j+1 << ": " << T[j] << endl;
	}

	return 0;

}
