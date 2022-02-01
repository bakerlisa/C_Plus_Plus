// JS CODE

// var floor = Math.floor(1.8);
// var ceiling = Math.ceil( Math.PI );
// var random = Math.random();
    
// console.log(floor);
// console.log(ceiling);
// console.log(random);


#include <iostream>
#include <string>
#include <vector>
#include <cmath>


using namespace std;

int main(){
    int numFloor = floor(1.8);
    int numCeil = ceil(M_PI);

    srand(time(0));
    int ranNums = rand() % 10;
    
    cout << numCeil << endl;
    cout << numFloor << endl;
    cout << ranNums << endl;
    return 0;
}

// Had to include cmath 
// You have to seed rand you time in order for it to change every time, else yo'll get the same unumer with rand()