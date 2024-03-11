#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

#define LEN <>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int A[10][10];
    int max,x,y;

    max=0;
    x=1;
    y=1;

    for(int a=0; a<9; a++){
        for(int b=0; b<9; b++){
            cin>>A[a][b];
            if(A[a][b]>max) {max=A[a][b]; x=a+1; y=b+1;}
        }
    }

    cout<<max<<"\n";
    cout<<x<<" "<<y<<"\n";

    return 0;

}
