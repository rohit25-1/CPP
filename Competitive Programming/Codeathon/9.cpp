#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int ctr;
        bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                ctr = 0;
                for (int k = 0; k < n; k++)
                {
                    if (arr[i][k] == 1 && k != i)
                    {
                        sum++;
                        flag=true;
                        break;
                    }
                }
                if(flag)
                {
                    flag=false;
                    continue;
                }
                for (int k = 0; k < m; k++)
                {
                    if (arr[k][j] == 1 && k != i)
                    {
                        sum++;
                        break;
                    }
                }
            }
        }
        }
    cout << sum << endl;

    return 0;
}