#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    long long  t ;
    cin >> t ;
    while(t--)
    {
        long long n ;
        cin >> n ;
        long long x = 1;
        for (long long i =1 ; i<=n ;i++)
        {
            x = x * i ;
        }
        cout << x << endl ;
    }


    return 0;
}
