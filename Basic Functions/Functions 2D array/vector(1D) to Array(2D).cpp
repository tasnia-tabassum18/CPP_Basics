#include <iostream>
#include <cstdlib>
using namespace std;

int input_rand(int[]);
void print1D(int[],int);


void vectoarray2D(int [20][20], int,int,int [20]);

void print2D(int [20][20],int,int);
int main()
{
    int x[100],y[20][20],n,m,n_x;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    n_x = input_rand(x);
    print1D(x,n_x);
    
    if(m*n == n_x){
       vectoarray2D(y,m,n,x);  
       print2D(y,m,n);
    }
    else{
        cout<<" Not possible";
    }

    return 0;
}
int input_rand(int a[]){
    int i,n;
    
    cout<<"how many elements: ";
    cin>>n;

    for(i = 0; i < n; i = i + 1){
        
        a[i]= rand()%10;
        cout<<" ";
    }
    return i;
}   
void vectoarray2D(int a[20][20], int r, int c,int s[]){
    int i,j,k; 
    k = 0;
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            a[i][j] =  s[k];
            k=k+1;
        }
    }
    
}
void print1D(int a[],int n){
    int i;

    for(i = 0; i < n; i = i + 1){
        cout<<a[i]<<" ";
        
        
    }
   cout<<endl;
}
void print2D(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}



