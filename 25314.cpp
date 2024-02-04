#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double byte;
	double numoflong;

	cin >> byte;
	numoflong = ceil(byte/4);

	for(int i = 0; i<numoflong; i++) cout << "long ";
	cout << "int" << endl;

	return 0;
}
