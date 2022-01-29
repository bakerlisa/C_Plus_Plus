// JS CODE:

// ["a", "b", "c", "d", "e"] 

// reverse the array

#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main(){
    // string arr[5] = {"a","b","c","d","e"};

    // int i = 0;
    // while(5/2 > i){
    //     string temp = arr[i];
    //     arr[i] = arr[5-1-i];
    //     arr[5-1-i] = temp;
    //     i++;
    // }

    vector<string> arr;
    arr.push_back("a");
    arr.push_back("b");
    arr.push_back("c");
    arr.push_back("d");
    arr.push_back("e");
    int i = 0;
    while(arr.size()/2 > i){
        string temp = arr[arr.size() - 1 - i];
        arr[arr.size() - i - 1] = arr[i];
        arr[i] = temp;
        i++;
    }
    cout << arr[0] << arr[1] <<arr[2] << arr[3] << arr[4] << endl;
    return 0;
}


//WOW that was harder than I was expecting, because I forgot to divide by 2 that way it doesn't go back over the changed values and rechange them to what they were

//Did it with arrays and with vectors for parcatice

//I do like how similar arrays and vectors are. I find vectores eaiser to use I wonder if that the same for everyone??