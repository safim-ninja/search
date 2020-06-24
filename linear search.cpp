#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[101], n, i, x;
    bool flag = true;
    cin >> n;
    for(i=0; i<n; i++)
        cin >> ar[i];

    cin >> x;

    for(i=0; i<n; i++)
    {
        if(x == ar[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "the number is not found in the given array" << endl;

    else
        cout << "the number is found at index: " << i << " (indexed from ZERO)" << endl;

    return 0;
}
