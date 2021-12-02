#include <iostream>
using namespace std;
const int SIZE = 100;

void checkArrayMax(int number, int arr[]){
    int max = 0;
    for(int i = 0; i < number; i++){
        cin >> arr[i];
        if(i==0) max = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    cout << "the max number is: "<<max;
}

void checkArrayMin(int number, int arr[]){
    int min = 0;
    for(int i = 0; i < number; i++){
        if(i==0) min = arr[i];
        if(arr[i] < min) min = arr[i];
        
    }
    cout << "the min number is: "<<min;
}


int main(){
    int number;
    cin >> number;
    int arr[SIZE];
    
    checkArrayMax(number, arr);
    cout << endl;
    checkArrayMin(number, arr);

}
