#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fib(int n, vector<ll>& arr) {
    if (arr[n] != -1) {
        return arr[n];
    }

    ll f;
    if (n <= 2) {
        f = 1;
    } else {
        f = fib(n - 1, arr) + fib(n - 2, arr);
    }

    arr[n] = f;

    return f;
}

int main() {
    // Code to Find n-th Fibonacci in Linear Running Time
    int n;
    cin >> n;

    vector<ll> vis(n + 1, -1);

    cout << n << "-th Fibonacci Number is " << fib(n, vis) << endl;

    /* Time Complexity: O(n)
       Space Complexity: O(n) for Visited Array + O(n) for Recursion Stack */
}
