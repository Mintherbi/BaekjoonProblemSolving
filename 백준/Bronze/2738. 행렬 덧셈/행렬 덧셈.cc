#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N,M;
    cin>>N>>M;
    int A[100][100]={0};
    int B[100][100]={0};

    for(int a=0; a<N; a++){
        for(int b=0; b<M; b++) {
            cin>>A[a][b];
        }
    }


    for(int a=0; a<N; a++){
        for(int b=0; b<M; b++) {
            cin>>B[a][b];
            B[a][b]+=A[a][b];
        }
    }

    
    for(int a=0; a<N; a++){
        for(int b=0; b<M; b++) {
            cout<<B[a][b]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

