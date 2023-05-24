#include <iostream>
#include <cstdlib>
using namespace std;

void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

void transpose(int[20][20],int[20][20],int,int);



int main()
{
    int x[20][20],y[20][20],n,m,sum;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    
    print2D(x, m , n);
    
    transpose(y,x,m,n);
    print2D(y, n , m);
    
    

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
void transpose(int a[20][20],int b[20][20], int r, int c){
    int i,j; 
    
    for(i = 0 ; i < c; i = i + 1){
        for(j = 0; j < r; j = j + 1){
            a[i][j] = b[j][i];
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
