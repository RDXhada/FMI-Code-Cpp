#include <iostream>
using namespace std;

const int MAX_SIZE = 255;

void getMatrix(int rows,int columns, int matrix[][MAX_SIZE]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            cin >> matrix[i][j];
        }
    }
}
void outMatrix(int rows,int columns, int matrix[][MAX_SIZE]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            cout << matrix[i][j] + 10 << ' ';
        }
        cout << endl;
    }
}
void MaxMatrix(int rows,int columns, int matrix[][MAX_SIZE]){
    int max = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            if(i == 0 && j == 0) max = matrix[i][j];
            if(matrix[i][j] > max) max = matrix[i][j];
    }
}
    cout << max;
}
void MinMatrix(int rows,int columns, int matrix[][MAX_SIZE]){
    int min = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            if(i == 0 && j == 0) min = matrix[i][j];
            if(matrix[i][j] < min) min = matrix[i][j];
        }
    }
    cout << min;
}

int main(){
    int rows;
    int columns;
    cin >> rows;
    cin >> columns;
    int matrix[MAX_SIZE][MAX_SIZE];
    
    getMatrix(rows, columns, matrix);
    outMatrix(rows, columns, matrix);
    cout << "Max number is: ";
    MaxMatrix(rows, columns, matrix);
    cout << endl;
    cout << "Min number is: ";
    MinMatrix(rows, columns, matrix);
    return 0;
}
