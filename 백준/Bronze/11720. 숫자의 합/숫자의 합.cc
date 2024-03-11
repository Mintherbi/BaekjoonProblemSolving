#include <iostream>
#include <cmath>
#include <vector>

#define LEN 101

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;
    cin>>T;

    char input[LEN];
    cin>>input;

    int result=0;

    for(int a=0; a<T; a++) {
        result+=int(input[a])-48;
    }

    cout<<result; 

    return 0;
}
