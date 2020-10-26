#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> a;
vector<string> b;
int cnt = 0;
void flip(int x, int y)
{
    cnt++;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[x + i][y + j] == '0')
            {
                a[x + i][y + j] = '1';
            }
            else
            {
                a[x + i][y + j] = '0';
            }
        }
    }
}

int main()
{
    int n;
    int m;
    bool flag = true;

    n = m = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s = "";
        cin >> s;
        a.push_back(s);
    }

    for (int j = 0; j < n; j++)
    {
        string s = "";
        cin >> s;
        b.push_back(s);
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < m - 2; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flip(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    cout << "-1\n";
                    flag = false;   
                    break;
                }
            }
        }
    }
    if(flag) {
        cout << cnt << endl; 
    }
}