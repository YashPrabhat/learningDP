#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    if (n <= 2) return 1;

    return fib(n-1) + fib(n-2);
}

int main(){
    vector<int> arr = {2,6,8};
    for (int num : arr){
        cout << fib(num) << endl;
    }
    return 0;
}