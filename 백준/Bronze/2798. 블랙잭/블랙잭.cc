#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, M;
    int cardlist[100];

    cin >> N >> M;
    for (int i = 0 ; i < N ; i++)
    {
        cin >> cardlist[i];
    }

    int diff = M;
    int result;

    for (int x=0;x<N-2;x++)
    {
        for (int y=x+1;y<N-1;y++)
        {
            for (int z=y+1;z<N;z++)
            {
                int sum = cardlist[x] + cardlist[y] + cardlist[z];

                if (sum<=M && (M-sum)<diff)
                {
                    diff = M-sum;
                    result = sum;
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}