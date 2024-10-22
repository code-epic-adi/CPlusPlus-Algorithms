#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fib(int n, vector<ll>& arr) {
    if (n <= 2) {
        return 1;
    }
    
    // Calculate Fibonacci numbers iteratively
    for (int i = 3; i <= n; i++) { 
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}

int main() {
    // Code to find the n-th Fibonacci number in linear time
    int n;
    cin >> n;
    
    vector<ll> vis(n + 1);
    vis[1] = 1;
    vis[2] = 1;

    cout << n << "-th Fibonacci Number is " << fib(n, vis) << endl;

    /* Time Complexity: O(n)
       Space Complexity: O(n) for the array storing Fibonacci numbers */
}
