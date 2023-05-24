#include <iostream>
#include <cstdlib>
using namespace std;
void input2D(int[20][20],int,int);
void print2D(int[20][20],int,int);

int max2D(int[20][20],int,int);
int min2D(int[20][20],int,int);

int frequency(int[20][20],int,int,int);
int sum_all_value_2D(int[20][20],int,int);
int  sum_diagonal_2D(int[20][20],int,int);

int add_2D(int[20][20],int[20][20],int[20][20],int,int);


int main()
{
    int x[10], n_x,n,m,add;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    void input2D_rand(x, m, n);
    add = sum_diagonal_2D(x,m,  n);
    
    cout<<"sum: "<<add;
    return 0;
}
    
}
void input2D(int a[20][20],int r ,int c){
    int i;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            a[i][j]= rand()%10;
        }
        
    }
    return n;
}
int sum_diagonal_2D(int a[20][20], int r, int c ){
    int i,j sum;
    sum = 0 ;
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            if( i == j){
               sum = sum + a[i][j]
        }
    }
    return sum;
}
