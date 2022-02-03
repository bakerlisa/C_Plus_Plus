#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

class Pokemon{
public: 
Pokemon(string name_i, int id_i, string ability_i){
    name = name_i;
    id = id_i;
     ability = ability_i;
}
int get_id(){
    return id;
}
string get_name(){
    return name;
}
string get_ability(){
    return ability;
}

private:
    int id;
    string name;
    string ability;
};

int main(){
    Pokemon pok("lisa", 9, "flying");


    cout << "Name: "  << endl;
    return 0;
}