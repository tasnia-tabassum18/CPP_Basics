#include <iostream>
#include <cstdlib>
using namespace std;
void input2D_rand(int [20][20],int  ,int);
void Initialize(int [20][20], int  , int );
void mult( int [20][20],int [20][20],int [20][20], int , int , int );
void print2D( int [20][20], int , int );
int main()
{
    int x[20][20], y[20][20], z[20][20], r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix
    /*while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";
        break;

    }
    */
    input2D_rand(x,r1,c1);
    print2D(x,r1,c1);
    //cout<<endl;
    
    input2D_rand(y,r2,c2);
    print2D(y,r2,c2);
    //cout<<endl;
    
    Initialize(z,r1,c2);
    mult(z,x,y,r1,c2,c1);
    
    print2D(z,r1,c2);

    
    
    

    
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
    
}
// Initializing elements of matrix mult to 0.
void Initialize(int a[20][20], int r , int c){
    int i, j ;
    for(i = 0; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            a[i][j]=0;
        }
    }
}
// Multiplying matrix a and b and storing in array z.
void mult( int z[20][20],int a[20][20],int b[20][20], int r, int c, int p){
    int i, j,k;
    for(i = 0; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            for(k = 0; k < p; k = k + 1){
                z[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
// Displaying the multiplication of two matrix.
void print2D( int a[20][20], int r, int c){
    int i,j;
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r; ++i){
        for(j = 0; j < c; ++j){
            cout << " " << a[i][j];
            if(j == c-1){
                cout << endl;
            }
        }
    }
}