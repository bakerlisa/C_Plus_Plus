
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cow{
	public:
	cow(string name_i,int age_i,string purpose_i){
		name = name_i;
		age = age_i;
		purpose = purpose_i;
	}

	string get_name(){
		return name;
	}
	int get_age(){
		return age;
	}
	string get_purpose(){
		return purpose;
	}

	void set_age(int new_age){
		age = new_age;
	}
	void set_name(string new_name){
		name = new_name;
	}
	void set_purpose(string new_purpose){
		purpose = new_purpose;
	}
	private:
	string name;
	int age;
	string purpose;
};


int main(){
   vector<cow> cattle;

    cattle.push_back(cow("Betsy",19,"pet"));
	cattle.push_back(cow("Verna",3,"dairy"));
	cattle.push_back(cow("SaraLee", 1,"meat"));
	cattle.push_back(cow("Roger",5,"hide"));

    cout << "The size of the vector Cattle is: " <<  cattle.size() << endl;
    cout << "The first cows name is: " << cattle[0].get_name() << endl;
	cout << "The second cows age is: " << cattle[1].get_age() << endl;
	cout << "The third cows purpose is: " << cattle[2].get_purpose() << endl;

	return 0;
}
