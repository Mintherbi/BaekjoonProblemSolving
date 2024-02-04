#include <iostream>
using namespace std;

int main() 
{
	int N[100];
	int len;

	cin >> len;

	for(int i=0; i<len; i++)
	{
		cin >> N[i];
	}
	int target;
	cin >> target;

	int num = 0;

	for(int j=0; j<len; j++)
	{
		if(N[j]==target) num++;
	}

	cout << num;

	return 0;
}
