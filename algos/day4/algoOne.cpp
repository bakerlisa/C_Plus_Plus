// JS CODE: 

// var fruit1 = "apples";
// var fruit2 = "oranges";
    
// fruit2 = fruit1;
    
// console.log(fruit2 + " and " + fruit1);

#include <iostream>
#include <string> 
#include <vector>

using  namespace std;

int main(){
    string fruit1 = "apples";
    // string fruit2 = "orange";

    // fruit2 = fruit1;
    string& fruit2 = fruit1;

    cout << fruit2 << endl;
    return 0;
}

// If they're the same value then we can make fruite2 into a reference variable and have it work the same way! I was messing aroung with that