#include <bits/stdc++.h>
using namespace std;

int sqgame (int t) 
{
    int n;
    cin >> n;
	int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    sort(arr,arr+n);

    int sum=0;
    for (int i=1; i<n;i++)
    {
        sum = sum +arr[i];
    }
    cout<< sum << endl;
    return 0;
}

int main ()
{
    int t;
    cin >> t;
    while (t>0)
    {
        sqgame(t);
        t--;
    }
}
