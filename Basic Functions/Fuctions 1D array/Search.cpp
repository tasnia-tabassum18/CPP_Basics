#include <iostream>

using namespace std;
int array_input(int[],int);
void array_print(int,int);
int array_search(int[],int,int);
int main()
{
    int x[10], n_x, n,b,m;
    n_x = array_input(x,n);
    b = 2;
    m = array_search(x, n_x,b);
    array_print(m,b);
    return 0;
}
int array_input(int a[],int n){
    int i;
    cout<<"how many elements: ";
    cin>>n;
    
    for(i = 0; i < n; i = i + 1){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    return n;
}
int array_search(int a[], int n,int b){
    int i, s;
    s = 1;
    for(i = 0; i < n; i = i + 1){
        if( a[i]==b){
            s = 0;
            break;
        }
    }
    return s;
}
void array_print(int m, int b){
    if(m == 1){
        cout<<b<<" is not in the list";
    }
    else{
        cout<<b<<" is in the list";
    }
}

