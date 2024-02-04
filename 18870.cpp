#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;
    cin>>T;
    vector<int> actual(1000000,0);
    vector<int> compressed(1000000,0);
    int N=0;
    
    for (int a=0; a<T; a++){
        cin>>actual[a];

        int series=0;

        for(int x=0; x<a; x++){
            if(actual[a]<actual[x]) {
                compressed[x]++;
            }
            else if(actual[a]>actual[x]){
                series++;
            }
        }
        compressed[a]=series;
    }

    for(int y=0; y<T; y++){
        cout<<compressed[y]<<" ";
    }

    return 0;
}
