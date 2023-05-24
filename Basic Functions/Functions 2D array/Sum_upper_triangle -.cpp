#include <iostream>
#include <cstdlib>
using namespace std;

void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

void sum_upper_triangle(int[20][20],int,int);



int main()
{
    int x[20][20],n,m,k;
    
    cout<<"n: ";
    cin >> k;
    
    m = k;
    n = k;
    
    cout<<"how many rows and coloumbs: ";
    cout<<m<<" "<<n;
    cout<<endl;
    
    input2D_rand(x, m, n);
    print2D(x,m ,n);
    cout<<endl;
    
     sum_upper_triangle(x,m,n);
    
    
    
    return 0;
}
void input2D_rand(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            a[i][j]= rand()%10;
        }
        
    }
}
void sum_upper_triangle(int a[20][20], int r, int c){
    int i,j,f; 
    f = 0;
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            if (i < j){
            f = f + a[i][j];
            cout<<a[i][j]<<" ";
            
            }
            else{
               cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    cout<<"sum of the upper triangle of the 2D array: "<<f;
    
    
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

