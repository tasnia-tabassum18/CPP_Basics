#include <iostream>
using namespace std;
int isFibonacci(int);
int main()
{
    int x, isF;
    cout << "X = ";
    cin >> x;
    isF = isFibonacci(x);
    if(isF==1){
        cout << "X is in Fibonacci.";
    }
    else{
        cout << "X is not Fibonacci.";
    }
    return 0;
}
int isFibonacci(int x){
    int i, f1, f2, f3, isF;
    f1 = 0;
    f2 = 1;
    isF = 0;
    if(x==0 || x==1){
        isF = 1;
    }
    else{//(x>1)
        for ( i=3; i<20; i=i+1){
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            if(x==f3){
                isF = 1;
                break;
            }
        }
    }
    return isF;
}
