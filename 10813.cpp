#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int i,j;
	int N,M;
	vector<int> Arr(100);

	for(int x=0; x<100; x++){
		Arr[x]=x+1;
	}

	cin>>N>>M;

	for(int y=0; y<M; y++){
		cin>>i>>j;
		int temp=Arr[i-1];
		Arr[i-1]=Arr[j-1];
		Arr[j-1]=temp;
	}

	for(int z=0; z<N; z++){
		cout<<Arr[z]<<" ";
	}
	
	return 0;
}

