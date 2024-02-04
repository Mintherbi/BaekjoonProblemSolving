#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, X;
	int Arr[10000];
	int lessArr[10000];

	cin >> N >> X;

	int less=0; 
	for(int i =0; i<N; i++)
	{
		cin >> Arr[i];
		if (Arr[i]<X) {
			lessArr[less]=Arr[i];
			less++;
		}	
	}

	for(int j=0; j<less; j++){
		cout << lessArr[j] << " ";
	}
	return 0;
}
