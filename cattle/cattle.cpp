
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum cow_purpose{dairy,meat,hide,pet};

class cow{
	public:
	cow(string name_i,int age_i,unsigned char purpose_i){
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
	unsigned char get_purpose(){
		return purpose;
	}

	void set_age(int new_age){
		age = new_age;
	}
	void set_name(string new_name){
		name = new_name;
	}
	void set_purpose(unsigned char new_purpose){
		purpose = new_purpose;
	}
	private:
	string name;
	int age;
	unsigned char purpose;
};


int main(){
   vector<cow> cattle;

    cattle.push_back(cow("Betsy",19,pet));

    cout << "The sizer of the vector Cattle is: " <<  cattle.size() << endl;
    cout << "The first cow is named: " << cattle[0].get_name() << endl;

	return 0;
}
