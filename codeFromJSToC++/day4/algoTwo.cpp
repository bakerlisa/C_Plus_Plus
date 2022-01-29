// JS Code:

// var fruit1 = "apples";
// var fruit2 = "oranges";
    
// var temp = fruit1; // temp is a common name for this
// fruit1 = fruit2;
// fruit2 = temp;
    
// console.log(fruit2 + " and " + fruit1);

#include <iostream>
#include <string>

using namespace std;

int main(){
    string fruit1 = "apples"; 
    string fruit2 = "oranges";
    string& temp = fruit1;

    
    fruit1 = fruit2;
    fruit2 = temp;

    cout << fruit1 << endl;
    cout << fruit2 << endl;


    return 0;
}

// Whats interseting on this one is if you change temp to areference variable then the reference shanges with the parent instead of staying the same as what the vaule was when it started