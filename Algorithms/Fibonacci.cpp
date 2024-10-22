#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fibonacci(int n){
    if(n<=2){
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    //Code to Find n-th Fibonacci in Exponential Running Time
    int n;
    cin>>n;

    cout<<n<<"-th Fibonacci Number is "<<fibonacci(n)<<endl;

    /*Time Complexity: O(2^n), which is exponential. 
    Space Complexity: O(n) if we consider the function call stack space because the maximum function call at a given time is n which is the left branch of the Recursion tree.*/
}