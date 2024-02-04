#include <iostream>
#include <cmath>
#include <vector>

#define LEN 26

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string input;
    cin>>input;
    vector<int> output(LEN,-1);

    for(int alpha=0; alpha<LEN; alpha++) {
        for(int a=0; a<input.length(); a++){
            if(int(input[a])==alpha+97) {
                output[alpha]=a;
                break;
            }
        }
    }

    for(int b=0; b<LEN; b++) {
        cout<<output[b]<<' ';
    }

    return 0;
}
