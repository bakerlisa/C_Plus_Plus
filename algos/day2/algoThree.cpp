// JS CODE

// for(var i=10; i>0; i--) {
//   if(i != 2) {
//     console.log(i);
//   } else {
//     console.log("ignition!");
//   }
// }
    
// console.log("liftoff!");

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    for(int i = 10; i > 0; i--){
        if(i != 2){
            cout << i << endl;
        }else{
            cout << "ignition" << endl;
        }
    }

    cout << "Lift off" << endl;
    return 0;
}

//stright forward