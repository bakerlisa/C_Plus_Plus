// JS CODE

// function d6() {
//     var roll = Math.random();
//     // your code here
//     return roll;
// }

// var playerRoll = d6();
// console.log("The player rolled: " + playerRoll);

#include <iostream>
#include <vector>
#include <cmath>
#include <vector>

using namespace std;
 int d6(){
        srand(time(0));
        int roll = rand() % (6 - 2) + 3; 
        return roll;
    }

int main(){
    int playerRoll = d6();
    cout << "The player rolled: " << playerRoll << endl;
    
    return 0;
}

// Even thoug the formating is the same, functins get me. Remembering to seed the rand, and the max and min width. I was also trying to see if I could get the numbers between two integers