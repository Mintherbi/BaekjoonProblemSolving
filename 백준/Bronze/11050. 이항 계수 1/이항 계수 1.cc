#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N,K;
    int Result=1;
    int factorial=1;

    cin>>N>>K;

    for(int x=1; x<=N-K; x++){
        factorial*=x;
    }

    for(int y=K+1; y<=N; y++){
        Result*=y;
    }

    cout<<Result/factorial;

    return 0;
}