#include<bits/stdc++.h>
using namespace std;

int binary__search(int ar[], int x, int last)
{
    int first, middle;
    first = 0;
    middle = (first + last) / 2;
    while(first <= last)
    {
        if(ar[middle] == x)
        {
            return 1;
        }
        if(x < ar[middle])
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
        else if(x > ar[middle])
        {
            first = middle + 1;
            middle = (first + last) / 2;
        }
    }

    return -1;
}

int main()
{
    int ar[1001], t, n, i, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0; i<n; i++)
            cin >> ar[i];  //sorted
        cin >> x;

        cout << binary__search(ar, x, n-1) << endl;

    }
    return 0;
}
