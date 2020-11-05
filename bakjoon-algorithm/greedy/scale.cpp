#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// 저울 문제의 경우  현재 배열 값이 이전 배열들의 누적 값 + 1 보다 크면 해당 값을 만들 수 없으므로  누적값 + 1 이  답이다. 
// 여기 중요한 점은 누적값은 다음 배열까지 도달하기 전까지의 범위라고 생각하면 된다.(이전 배열들은 해당 범위까지 가능하다는 것이 증명된 것이며, 해당 값만큼 범위안에 포함 된다면 그 배열도 가능하다는 뜻이다.)
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int weight;
        cin >> weight;
        v.push_back(weight);
    }
    sort(v.begin(), v.end());

    int sum;
    sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (v[i] > sum + 1)
        {
            break;
        }
        sum += v[i];
    }
    cout << sum + 1 << endl;
}