#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int *gettotal(vector<string> v)
{

    int *alphabet = new int[26]();

    for (int i = 0; i < v.size(); i++)
    {
        string word = v[i];
        int wordlength = v[i].length();
        int lnitialvalue = 1;
       
        for (int j = wordlength - 1; j >= 0; j--)
        {
            int alphabetindex = word[j] - 'A';
            alphabet[alphabetindex] = alphabet[alphabetindex] + lnitialvalue;
            lnitialvalue = lnitialvalue * 10;
        }
    }
    sort(alphabet, alphabet + 26, compare);
  
    return alphabet;
}

int main()
{

    int wordcnt;
    int maximumvalue;
    wordcnt = 0;
    maximumvalue = 0;

    cin >> wordcnt;

    vector<string> v;

    for (int i = 0; i < wordcnt; i++)
    {
        string word;
        cin >> word;
        v.push_back(word);
    }

    int *alphabet = gettotal(v);
    int num = 9;

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            continue;
        }

        maximumvalue = maximumvalue + alphabet[i] * num;

        num--;
    }

    cout << maximumvalue << endl ;
    delete[] alphabet;
}
