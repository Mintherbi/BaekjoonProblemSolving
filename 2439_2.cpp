#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int star;

	cin >> star;

	for(int i=star, j=0; j<star; i--, j++){
		do{ cout << " "; i--;} while(i>0);
		do{ cout << "*"; j++;} while(j<star);
		cout << endl;
	}
	
	return 0;
}
