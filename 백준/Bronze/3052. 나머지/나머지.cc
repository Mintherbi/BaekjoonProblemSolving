#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> Remain(42);
    int sum=0;

    for(int x=0; x<10; x++){
        int get;
        cin>>get;
        Remain[get%42]=1;
    }

    for(int y=0; y<42; y++){
        sum+=Remain[y];
    }

    cout<<sum;

    return 0;
}