#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vector<long long> Result(100,1);

	int T;

	cin>>T;

	for(int b=0; b<T; b++){
		int K,N;
		long long A=1,B=1,C=1;
		cin>>K>>N;

		for(int x=1; x<=N; x++){
			A*=x;
		}
		
		for(int y=1; y<=K; y++){
			B*=y;
		}

		for(int z=1; z<=N-K; z++){
			C*=z;
		}

		Result[b]=A;
		cout<<Result[b]<<' ';
		Result[b]/=B;
		cout<<Result[b]<<' ';
		Result[b]/=C;			
		cout<<Result[b]<<'\n';
	}

	for(int a=0; a<T; a++){
		cout<<Result[a]<<'\n';
	}
	return 0;
}
