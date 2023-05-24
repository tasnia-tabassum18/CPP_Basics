#include <iostream>

using namespace std;
int array_input(int [] );
int positive(int[], int );
int negative(int[], int );
int odd(int[], int );
int even(int[], int );
int zero(int[], int );

int main()
{
    int p,ne,o,e,z,n_x,x[10];
    
    
    
    n_x = array_input(x);
    p = positive(x,n_x);
    ne = negative(x,n_x);
    o = odd(x,n_x);
    e= even(x,n_x);
    z =zero(x,n_x);
    
    cout<<"Positive: "<<p<<endl;
    cout<<"negative: "<<ne<<endl;
    cout<<"odd: "<<o<<endl;
    cout<<"even: "<<e<<endl;
    cout<<"zero: "<<z<<endl;
    
    
    

    return 0;
}
int array_input(int a[]){
    int i, n;
    
    cout<<"how many elements: ";
    cin>>n;
    
    for(i =0 ; i < n; i = i +1){
        cout<<"a["<<i<<"]: ";
        cin>> a[i];
    }
}
int positive(int a[], int p){
    int i,n,pos;
    pos = 0;
    for(i = 0 ; i < n; i = i +1){
        if(a[i] > 0){
            pos = pos + 1;
        }
    }
    return pos;
}
int negative(int a[],int p){
    int i,n,neg;
    neg = 0;
    for(i = 0 ; i < n; i = i +1){
        if(a[i] < 0){
            neg = neg + 1;
        }
    }
    return neg;
}
int odd(int a[],int p){
    int i,n,odd;
    odd = 0;
    for(i = 0 ; i < n; i = i +1){
        if(a[i]% 2 != 0){
            odd = odd + 1;
        }
    }
    return odd;
}
int even(int a[],int p){
    int i,n,even;
    even = 0;
    for(i = 0 ; i < n; i = i +1){
        if(a[i] % 2 == 0){
            even = even + 1;
        }
    }
    return even;
}
int zero(int a[],int p){
    int i,n, zero ;
    zero = 0;
    for(i = 0 ; i < n; i = i +1){
        if(a[i] == 0){
            zero = zero + 1;
        }
    }
    return zero;
}

