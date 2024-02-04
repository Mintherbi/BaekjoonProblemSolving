#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T; 
    int x,y;
    vector<vector <int>> paper(100, vector<int>(100));

    cin>>T;

    for(int a=0; a<T; a++){
        cin>>x>>y;
        for(int b=0; b<10; b++){
            for(int c=0; c<10; c++){
                paper[x+b-1][y+c-1]=1;
            }
        }
    }

    int area=0;

    for(int d=0; d<100; d++){
        for(int e=0; e<100; e++){
            area+=paper[d][e];
        }
    }

    cout<<area; 
    return 0;
}

