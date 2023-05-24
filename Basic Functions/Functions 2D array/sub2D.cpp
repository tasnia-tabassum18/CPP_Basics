#include <iostream>
#include <cstdlib>
using namespace std;
void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

void sub2D(int[20][20],int[20][20],int[20][20],int,int);



int main()
{
    int x[20][20],y[20][20],z[20][20],n,m,sum;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    input2D_rand(y, m, n);
    
    print2D(x,m,n);
    print2D(y,m,n);
    
    sub2D( z,x, y, m, n);
    print2D(z,m,n);
    
   
    
    return 0;
}
void input2D_rand(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            a[i][j]= rand()%10;
        }
        cout<<endl;
    }
    cout<<endl;
}
void sub2D(int z[20][20],int x[20][20],int y[20][20], int r, int c){
    int i,j; 
    
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            z[i][j] = x[i][j] - y[i][j];
        }
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
   cout<<endl;
}
