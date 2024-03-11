#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> Student(30);
    int temp;

    for(int x=0; x<28; x++){
        cin>>temp;
        Student[temp-1]=1;
    }

    for(int y=0; y<30; y++){
        if(Student[y]!=1) {
            cout<<y+1<<'\n';
        }
    }

    return 0;
}