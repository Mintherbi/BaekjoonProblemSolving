#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int M;
	int i,j,k;
	vector<int> Arr(100,0);

	cin>>N>>M;

	for (int x=0; x<M; x++){
		cin>>i>>j>>k;
		for(int y=i; y<=j; y++){
			Arr[y]=k;
		}
	}

	for(int z=1; z<=N; z++){
		cout<<Arr[z]<<" ";
	}

	return 0;
}

			
