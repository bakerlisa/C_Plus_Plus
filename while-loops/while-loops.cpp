#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
    vector<int> values;
    values.push_back(1);
    values.push_back(234);
    values.push_back(32);
    values.push_back(754);
    values.push_back(74);

    for(int i = 0; i < values.size(); i++){
        cout << values[i] << endl;
    }

    for(int value: values){
        cout << "value: " << value << endl;
    }

    for(vector<int>::iterator it = values.begin(); it != values.end(); it++){
        cout << *it << endl;
    }




    return 0;
}