#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

void EnterArray(int rows, int columns, char forest[MAX_SIZE][MAX_SIZE]){
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            cin >> forest[i][j];
        }
    }
}

void checkArray(int rows, int columns, char forest[MAX_SIZE][MAX_SIZE]){
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            cout << forest[i][j] << ' ';
            
        }
        cout << endl;
        
    }
}

void caseArray(int rows, int columns, char forest[MAX_SIZE][MAX_SIZE],int years){
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            if(years%10 == 0){
                if(forest[i][j] >= '1' && forest[i][j] <= '3'){
                    forest[i][j] ++;
                }
                else if(forest[i][j] == '4' && forest[i - 1][j - 1] ==
                        forest[i + 1][j - 1]){
                    forest[i][j] --;
                }
                }
            
            }
        }
    }


int main(){
    int rows, columns;
    cin >> rows;
    cin >> columns;
    char forest[MAX_SIZE][MAX_SIZE];
    
    cout << endl;
    int years;
    cout << "Enter years: ";
    cin >> years;
    EnterArray(rows, columns, forest);
    caseArray(rows, columns, forest, years);
    checkArray(rows, columns, forest);
    
    
    
    
    return 0;
}
