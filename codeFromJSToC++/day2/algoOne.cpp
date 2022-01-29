// JS CODE:

// var isSunny = true;
// var temperature = 45; // let's assume degrees Fahrenheit
// var isRaining = false;
// var whatToBring = "I should bring: ";
    
// if(isSunny) {
//   whatToBring += "sunglasses, ";
// }
// if(temperature < 50) {
//   whatToBring += "a coat, ";
// }
// if(isRaining) {
//   whatToBring += "an umbrella, ";
// }
// whatToBring += "and a smile!";
    
// console.log(whatToBring);

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    bool isSunny = true;
    int temp = 45;
    bool isRaining = false; 
    string whatShouldIBring = "I should bring: ";

    if(isSunny){
        whatShouldIBring += " sunglasses, ";
    }
    if(temp < 50){
        whatShouldIBring += " a coat, ";
    }
    if(isRaining){
        whatShouldIBring += " an umbrella, ";
    }
    whatShouldIBring += " and  a smile ";

    cout << whatShouldIBring << endl;

    return 0;
}

//this one had no differences with this code, or shiuld I say no resitciont when it comes to JS -> C++ 