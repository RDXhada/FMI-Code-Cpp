#include <iostream>
using namespace std;
const int SIZE = 100;




int NumberOne(int number1){
    int sum = 0;
    for(int i = 1; i < number1; i++){
        if(number1%i == 0){
            bool flag = true;
            sum = sum + i;
            for(int j = 2; j < i/2; j++){
                if(j%i == 0){
                    flag = false; break;
                }
            }
        
        }
        
    }
    return sum;
}
int NumberTwo(int number2){
    return number2;
}
int main(){
    int number1;
    cin >> number1;
    int number2;
    cin >> number2;
    if(NumberOne(number1) == NumberTwo(number2)){
        cout << "Amicable pairs";
    }
    else {
        cout << "not amicable";
    }
    NumberOne(number1);
    NumberTwo(number2);
   
    
    return 0;
}
