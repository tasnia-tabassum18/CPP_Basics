#include <iostream>
#include <cstdlib>
using namespace std;
void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

int sum_all_value(int[20][20],int,int);



int main()
{
    int x[20][20],n,m,sum;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    print2D(x,m ,n);
    sum = sum_all_value(x,m,n);
    cout<<"sum of all value: "<<sum;
    
    
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
int sum_all_value(int a[20][20], int r, int c){
    int i,j,f; 
    f = 0;
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            f = f + a[i][j];
        }
    }
    return f;
}
void print2D(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   