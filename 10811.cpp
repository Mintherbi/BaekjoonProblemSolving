#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int M,N;
	
	cin>>N>>M;
	
	vector<int> Basket(N);

	for(int z=0; z<N; z++){
		Basket[z]=z+1;
	}
	
	for(int x=0; x<M; x++){
		int i,j;
		cin>>i>>j;

		for(int a=i, b=j; a<b; a++,b--){
			int temp=Basket[a-1];
			Basket[a-1]=Basket[b-1];
			Basket[b-1]=temp;
		}
	}

	for(int y; y<N;y++){
		cout<<Basket[y]<<" ";
	}

	return 0;
}
