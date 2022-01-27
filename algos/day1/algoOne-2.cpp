// JS CODE:

// for(var i=0; i<10; i++) {
//     console.log(i);
//     i = i + 3; 
// }
    
// console.log("outside of the loop " + i);

#include <iostream>
#include <string>

using namespace std;

int main(){
    int it;
    for(int i = 0; i < 10; i++){
        it = i;
        cout << i << endl;
        i += 3;
        it = i;
    }

    cout << "outside the loop the i is: " << it << endl;
    return 0;
}

//interstingin js the ending var is available outside the loop & the ending value is 12 not 11
