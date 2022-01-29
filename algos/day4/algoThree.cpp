// JS CODE:

// var start = 0;
// var end = 12;
    
// while(start < end) {
//     console.log("start: " + start + ", end: " + end);
//     start += 2;
//     end -= 2;
// }

#include <iostream>
#include <string>

using namespace std;

int main(){
    int start = 0;

    int end = 12;

    while(start < end){
        cout << "Start: " << start << " End: " << end << endl;
        start += 2;
        end -= 2;
    }
    return 0;
}

//pretty straight forward for a loop nothing crazy or unexpeected