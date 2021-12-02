#include <iostream>
using namespace std;

const int SIZE  = 100;
void arrayMatrix(int rows, int columns, int matrix[SIZE][SIZE]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
}

void sumOfMatrixDiagonal(int rows, int columns, int matrix[SIZE][SIZE]){
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(i == j)
                sum1 += matrix[i][j];
            if(i + j == (columns - 1))
                sum2 += matrix[i][j];
        }
    }
    cout << sum1;
    cout << sum2;
}



int main(){
    int rows;
    cin >> rows;
    int columns = rows;
    int matrix[SIZE][SIZE];
    
    arrayMatrix(rows, columns, matrix);
    sumOfMatrixDiagonal(rows, columns, matrix);
  
  return 0;
}
