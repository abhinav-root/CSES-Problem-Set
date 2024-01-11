/*
    Dynamic Programming: Dice Combinations
    https://cses.fi/problemset/task/1633
*/

#include <bits/stdc++.h>
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int countWays(int n)
{
    vector<int> dp(n+1);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i-j >= 0) {
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    }
    return dp[n];
}

int main()
{
    FAST_IO;
    int n;
    cin >> n;
    cout << countWays(n) << endl;
    return 0;
}