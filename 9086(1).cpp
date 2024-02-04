#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;
    string out[10][2];

    for(int a; a<T; a++){
        string temp[101];
        cin>>temp; 
        out[a][0]=temp[0];
        out[a][1]=temp[temp.length()-1];
    }

    for(int b; b<T; b++){
        cout<<out[b];
    }

    return 0;
}
