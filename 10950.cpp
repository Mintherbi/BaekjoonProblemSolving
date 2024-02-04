#include <iostream>
using namespace std;

int main() 
{
	int n;
	int result[1000];
	
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int a,b;
		cin >> a >> b;
		result[i] = a+b;
	}

	for(int j=0; j<n; j++) cout << result[j] << endl;

	return 0;
}
