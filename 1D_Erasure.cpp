#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int n,k;
        cin >> n >> k;
        char s[n];
        for (int i=0; i<n; i++)
        {
            cin >> s[i];
        }
        int count = 0;
        for (int i=0; i<n; i++)
        {
            if (s[i] == 'B')
            {
                count ++;
                i = i + k - 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}