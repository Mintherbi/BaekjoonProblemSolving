#include <iostream>
#include <cmath>
#include <vector>
#include <string>

#define LEN 1000
using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin>>T;

	vector<string> S(LEN);
	vector<int> Repeat(LEN,0);

	for(int a=0; a<T; a++) {
		cin>>Repeat[a]>>S[a];
	}

	for(int b=0; b<T; b++) {
		for(int c=0; c<S[b].length(); c++) {
			for(int d=0; d<Repeat[b]; d++) {
				cout<<S[b][c];
			}
		}
		cout<<'\n';
	}

	return 0;
}
