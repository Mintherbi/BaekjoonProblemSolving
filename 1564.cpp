#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin>>N;
	vector<int> Score(N);
	double Max=0;
	double Sum=0;

	for(int x=0; x<N; x++){
		cin>>Score[x];
		if(Score[x]>Max) Max=Score[x];
		Sum+=Score[x];
	}

	cout<<(((Sum/N)/Max)*100);

	return 0;
}
