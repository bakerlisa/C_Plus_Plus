// JS CODE:

// var countPositives = 0;
// var numbers = [3, 4, -2, 7, 16, -8, 0];
    
// // your code here!
    
// console.log("there are " + countPositives + " positive values");

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int positives = 0;
    int numbers[7] = {3, 4, -2, 7, 16, -8, 0};
    for (int num: numbers){
        if(num > 0){
            positives++;
        }
    }
    cout << positives << endl;
    return 0;
}

//straight forward!