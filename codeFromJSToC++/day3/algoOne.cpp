// JS CODE:
// var x = 5;
    
// function setX(newValue) {
//     x = newValue; 
// }
    
// console.log(x);
// setX(15);
// console.log(x);

#include <iostream>
#include <string>
#include <vector>

using namespace std; 
int setX(int newValue){
    int x = newValue;
}

int main(){
    int x = 5;
    cout << x << endl;
    setX(15);
    cout << x << endl;

    return 0;
}

// C++ the retrns are 5,5 with a straight translation. We'd have to put cout in the funtion if we ever wanted 15, that or have a gkobal var