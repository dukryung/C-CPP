#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;
    
    vector<int> peoplepositionvec(n, 0);

    for (int i = 0; i < n; i++)
    {
        int tallpeoplecnt;
        tallpeoplecnt = 0;
        cin >> tallpeoplecnt;

        for (int j = 0; j < n; j++)
        {
            if (peoplepositionvec[j] == 0 && tallpeoplecnt == 0)
            {
                peoplepositionvec[j] = i + 1;
                break;  
            } else if (peoplepositionvec[j] == 0) {
                tallpeoplecnt--;
            } 
        }
    }
    
    for( int i = 0;  i < n ; i++) {
        cout << peoplepositionvec[i] << " ";
    }
}