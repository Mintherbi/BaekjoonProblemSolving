#include <iostream>
using namespace std;

int main()
{
        int t,m;
        int d;

        int _t, _m;

        cin >> t >> m;
        cin >> d;

        _m = d%60;
        _t = (d/60);
        if(m+_m>59) cout << (t+_t+1)%24 << " " << (m+_m)%60 << endl;
        else cout << (t+_t)%24 << " " << m+_m << endl;
        return 0;
}