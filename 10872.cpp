#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N=0;
	int Result=1;
	cin>>N;

	for(int x=1; x<=N; x++){
		Result*=x;
	}
	cout<<Result;

	return 0;
}
