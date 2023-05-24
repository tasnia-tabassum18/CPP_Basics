//insert fibonacci series and print it.
#include <iostream>

using namespace std;
int fibonacci( int[], int);
void array_print(int[], int);
int main()
{
    int x[10], f,n;
    
    cout<<"how many elements: ";
    cin >> n;
    
    f = fibonacci(x,n);
    array_print(x,f);
    
    return 0;
}
int fibonacci(int p[], int n){
    int i, temp, f1, f2;
    f1 = 0;
    f2 = 1;
    p[0] = f1;
    p[1] = f2;
    for( i = 2; i < n; i = i + 1){
        temp = f1;
        f1 = f2;
        f2 = f2 + temp;
        p[i] = f2;
      
    }
  return i;
}
void array_print(int a[], int n){
    int i;
    for(i = 0; i < n; i = i + 1){
        cout<<"a["<<i<<"]: "<<a[i];
        cout<<endl;
    }
}