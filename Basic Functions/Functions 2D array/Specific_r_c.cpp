// printing a specific row or coloumb

#include <iostream>
#include <cstdlib>
using namespace std;
void input2D_rand(int[20][20],int,int);
void print1D(int[],int);
void print2D(int [20][20],int,int);
int array2D_r_c(int [], int [20][20],int,char,int);

int main()
{
    int x[20][20],y[20], m,n,n_x;
    char z;
    
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x,m,n);
    print2D(x,m,n);
    n_x = array2D_r_c(y,x,n,'r',0);
    print1D(y,n_x);
    return 0;
}
int array2D_r_c( int b[], int a [20][20], int c, char ch, int p){
    int i,j;
    if( ch == 'r'){
        for(i = 0; i < c; i = i + 1){
            
                b[i] = a[p][i];
            
        }
    }
    return c;
                
}
void input2D_rand(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            a[i][j]= rand()%10;
        }
        cout<<endl;
    }
}
void print1D(int a[],int n){
    int i;

    for(i = 0; i < n; i = i + 1){
        //for(j = 0 ; j < c; j = j + 1){
            cout<<a[i]<<" ";
        
        
    }
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