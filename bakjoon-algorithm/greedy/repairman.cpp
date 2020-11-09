#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// v[0]에서 테이프 길이 만큼 더한수 보다 더 커야만 한다 쉽게 죄우 0.5센치 만큼 여유가 있어야 된다는 것은 1, 2, 3 이 있을 때 
// 그리고 길이 2인 테이프가 있을 때 1,2 는 테이프로 막을 수 있지만 3은 막을 수 없으므로 테이프를 하나 더 써야한다. 
// 근데 35줄 에서 +1을 더해서 두 위치의 차이 + 1(좌 우 0.5센치씩)가 테이프의 길이를 넘어서면 테이프를 더한다.

int main()
{
    int n, l;
    int result;
    n = l = 0;
    result = 0;
    cin >> n >> l;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int position;
        position = 0;
        cin >> position;
        v.push_back(position);
    }

    sort(v.begin(), v.end());

    int st = v[0];
    result +=1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] - st + 1 > l)
        {
            result++;
            st = v[i];
        }
    }

    cout << result << endl;
}