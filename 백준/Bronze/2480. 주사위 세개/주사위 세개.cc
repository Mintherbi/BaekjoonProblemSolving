#include <iostream>
using namespace std;

#define CHECKSAME(x,y,z) (x==y) + (y==z) + (x==z)

int main()
{
        int a,b,c;

        cin >> a >> b >> c;

        if (CHECKSAME(a,b,c) == 3) cout << 10000+ (a*1000) << endl;
        else if (CHECKSAME(a,b,c) == 1 ) cout << 1000 + ((a==b) * 100 * a) + ((a==c)*100*a) +((b==c)*100*c)<< endl;
        else if (CHECKSAME(a,b,c) == 0 )
        {
                int big=a;
                if(b>a) big = b;
                if(c>big) big = c;
                cout << big *100 << endl;
        }
        return 0;
}