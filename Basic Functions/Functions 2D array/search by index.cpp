#include <iostream>
#include <cstdlib>
using namespace std;

void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

void search_by_index(int[20][20], int, int, int ,int[]);


int main()
{
    int x[20][20],y[400],n,m;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    
    print2D(x, m , n);
    
    search_by_index(x,m,n,6,y);
    
    cout<<"positions: "<<y[0]<<" and "<<y[1];
    

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
void search_by_index(int a[20][20], int r, int c,int f, int b[400]){
    int i,j; 
    b[0] = -1;
    b[1] = -1;
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            if (a[i][j] == f){
                b[0] = i;
                b[1] = j;
               break; 
            }
        }
    }
}
void print2D(int a[20][20],int r, int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   cout<<endl;
}
