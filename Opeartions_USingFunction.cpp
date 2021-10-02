#include <iostream>  
using namespace std;  
int main()  
{  
 cout << " =====  Program to demonstrate Addition, Subtraction, Multiplication and Transpose of two Matrices ===== \n\n";   
int row, col, i, j,k ;
    int m1[10][10], m2[10][10], sum[10][10] , sub[10][10], mul[10][10] , transMatrix[10][10];
 cout << "\n\nEnter the number of Rows and Columns of the Matrix : "<<endl;
    cin >> row >> col;

    cout << "\nEnter the " << row* col << " Elements of first Matrix  : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m1[i][j];
        }
    }
    cout << "\nEnter the " << row * col << " elements of second matrix : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> m2[i][j];
        }
    }

    cout << "\nThe first matrix is : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m1[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "\nThe second matrix is : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << m2[i][j] << "  ";
        }
        cout << endl;
    }
   
    cout << "\nThe Addition of the matrix is : "<<endl;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "\nThe Subtraction of  the matrix is : "<<endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sub[i][j] = m1[i][j]  -  m2[i][j];
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << sub[i][j] << "  ";
        }
        cout << endl;
        
    }
    
    cout<<"\nThe Multiplication  of the Matrix is : "<<endl;    
   for(i=0;i<row;i++)    
   {      
   for(j=0;j<col;j++)    
   {    
   mul[i][j]=0;    
    for(k=0;k<col;k++)    
   {    
   mul[i][j] += m1[i][k] * m2[k][j];    
   }    
   }    
   }    

     for(i=0;i<row;i++)    
    {    
    for(j=0;j<col;j++)    
    {    
    cout<<mul[i][j]<<" ";    
   }     
   cout << endl;
   }
   

  cout<<" The Transpose of the Matrix is : "<<endl;
  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
      transMatrix[j][i] = m1[i][j];
    }
  }
  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
      transMatrix[j][i] = m2[i][j];
    }
  }

  for(int i=0;i<col;i++) {
    for(int j=0;j<row;j++) {
      cout<<transMatrix[i][j]<<" ";
       if(j==row-1)
        cout<<endl;
    }
    cout << endl ;
}
    return  0 ;
}
