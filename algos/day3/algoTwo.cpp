// var x = 5;
    
// function addToX(amount) {
//     return x + amount;
//     console.log("hello there");
// }
    
// console.log(x);
// var result = addToX(-10);
// console.log(result);
// console.log(x);

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int addToX(int x,int amount){
    return x + amount;
    cout << "hello world" << endl;
}

int main(){
    int x = 5;
    cout << x << endl;
    int result = addToX(x,-10);
    cout << result << endl;
    cout << x << endl;
    
    return 0;
}

//Only difference here was I had to pass the x values for the function