#include <iostream>

using namespace std;

int array_input(int[]);

int digits(int, int[]);
int main()
{
    int x[10], d;
    int y = rand()%1000;
    d = digits(y,x);
    array_output(x,d);
    return 0;
}

int digits(int y, int a[]){
    int i;
    for(i = 0; i != 0;i = i +1){
        d = y%10;
        a[i] = d;
        y=y/10;
    }
    return i;
}
void array_output(int a[], int n){
    int i;
    for(i = 0; i < n; i = i + 1){
        cout<<"a["<<i<<"]: "<<a[i];
    }
}