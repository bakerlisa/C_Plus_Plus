// JS CODE:

// function getTotal(arrayOfNumbers) {    
//   var sum = arrayOfNumbers[0];   
//   for(var i=0; i<arrayOfNumbers.length; i++) {
//     sum += arrayOfNumbers[i];
//     console.log("the current sum is: " + sum); 
//   } 
//   console.log("the total is: " + sum); 
// }
    
// getTotal([1, 3, 5]);

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getTotal(vector<int> testArray){
    //int sum = testArray[0];  

    for(int number : testArray){
        cout << "Hello World " << number << endl;
    }
};

int main(){
    vector<int> testArray;
    testArray.push_back(1);
    testArray.push_back(3);
    testArray.push_back(5);

    getTotal(testArray);
    return 0;
}


// I couldn't get my complier to initialize my initializer at the same time. 