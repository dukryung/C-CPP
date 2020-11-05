#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int i = 1;
    while (1)
    {
        int result;
        int lval, pval, vval;

        lval = pval = vval = 0;
        cin >> lval >> pval >> vval;

        if (lval == 0 && pval == 0 && vval == 0)
        {
            break;
        }
        int share = 0;
        int remainder = 0;

        share = vval / pval;
        result = share * lval;
        remainder = vval % pval;
        result += remainder > lval ? lval : remainder;

        cout << "Case " << i << ": " << result << endl;
        i++;
    }
}