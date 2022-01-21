#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

class Student{
    public:
    Student(string name_i, int id_i){
        name = name_i;
        id = id_i;
    }
    string get_name(){
        return name;
    }
    int get_id(){
        return id;
    }

    void set_name(string new_name){
        name = new_name;
    }
    void set_id(int new_id){
        id = new_id;
    }
    private:
    string name;
    int id;
};

class Course{
    public:
    Course(int id_i, string course_i, double credits_i){
        id = id_i;
        course = course_i;
        credits = credits_i;
    }
    int get_id(){
        return id;
    }
    string get_course(){
        return course;
    }
    double get_credits(){
        return credits;
    }

    void set_id(int new_id){
        id = new_id;
    }
    void set_course(string new_course){
        course = new_course;
    }
    void set_credits(double new_credits){
        credits = new_credits;
    }
    private:
    int id;
    string course;
    double credits;
};

class Grade{
    public:
    Grade(int student_id_i, int course_id_i, char grade_i){
        student_id = student_id_i;
        course_id = course_id_i;
        grade = grade_i;
    }
    int get_student_id(){
        return student_id;
    }
    int get_course_id(){
        return course_id;
    }
    char get_grade(){
        return grade;
    }

    void set_student_id(int student_id_new){
        student_id = student_id_new;
    }
    void set_course(int course_id_new){
        course_id = course_id_new;
    }
    void set_grade(char grade_new){
        grade = grade_new;
    }
    private:
    int student_id;
    int course_id;
    char grade;
};

int main(){
    vector<Student> freshmen;
    vector<Student> sophmore;
    vector<Student> junior;
    vector<Student> senior;

    int studentID = 1;
    
    char moreStudentsYN;
    bool moreStudents = true;

    while(moreStudents == true){
            string name = "";
            int year = 0;

            cout << "Your Name is: " << name << endl;

            cout << "Good morning. What's your name?" << endl;
            getline(cin, name);
            
            if(!name.empty()){
                cout << "Hello " << name  << " what grade are you in 9 (freshman), 10 (sophmore), 11 (junior), or 12 (senior)" << endl;
                cin >> year;
                    if(year == 9){
                        cout << "Congrats and welcome to your first year!" << endl;
                        freshmen.push_back(Student(name,studentID));
                        cout << "We've create a freshmen vector size: " << freshmen.size() << endl;
                        studentID++;
                    }else if(year == 10){
                        cout << "Sphomore, you're not new but still a guppie!" << endl;
                        sophmore.push_back(Student(name,studentID));
                        studentID++;
                        cout << "Hooray we created a sopmore vector: " << sophmore.size() << endl;
                    }else if(year == 11){
                        cout << "Junior, my favoirte year." << endl;
                        junior.push_back(Student(name,studentID));
                        studentID++;
                        cout << "Hip-Ha! We created a junior vector: " << junior.size() << endl;
                    }else if(year == 12){
                        cout << "Oh, Your a senior!!! that's exciting!" << endl;
                        senior.push_back(Student(name,studentID));
                        studentID++;
                        cout << "Bing-Bang-Sham-Bam!! You are a senior vector: " << senior.size() << endl;
                    }else{
                        cout << "I didn't get that, try again. 9, 10, 11, or 12" << endl;
                        cin >> year;
                    }
                cout << "Do you want to add another student?? y/n" << endl;
                cin >> moreStudentsYN;
                if(moreStudentsYN == 'n'){
                    moreStudents = false;
                    break;
                }else if(moreStudentsYN == 'y'){
                    moreStudents = true;
                    continue;
                }else{
                    cout << "I'm sorry I don't understand. y or n" << endl;
                }
            }
    }//student add loop
    return 0;
}