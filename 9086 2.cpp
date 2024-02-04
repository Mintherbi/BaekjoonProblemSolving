#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	char result[10][2];

	int T;
	cin>>T;

	for(int a=0; a<T; a++) {
		string A;
		cin>>A;
		result[a][0]=A[0];
		result[a][1]=A[A.length()-1];
	}

	for(int b=0; b<T; b++) {
		cout<<result[b][0]<<result[b][1]<<'\n';
	}

	return 0;
}
