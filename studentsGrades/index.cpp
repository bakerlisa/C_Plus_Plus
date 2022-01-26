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

    vector<Grade> grade;
    vector<Course> course;

    int studentID = 1;
    
    // student variables
    char moreStudentsYN;
    bool moreStudents = true;
    string name = "";
    string yearName = "";
    int year = 0;

    // course answers
    string className = "";
    int classCredits;
    char courseGrade;
    int courseID = 123;

    cout << courseID << endl;
    cout << "Your Name is: " << name << endl;

    cout << "Good morning. What's your name?" << endl;
    getline(cin, name);
    
    cout << "Hello " << name  << " what grade are you in 9 (freshman), 10 (sophmore), 11 (junior), or 12 (senior)" << endl;
    cin >> year;

    if(year == 9){
        cout << "Congrats and welcome to your first year!" << endl;
        freshmen.push_back(Student(name,studentID));
        yearName = "freshman";
    }else if(year == 10){
        cout << "Sophomore, you're not new but still a guppie!" << endl;
        sophmore.push_back(Student(name,studentID));
        yearName = "sophmore";
    }else if(year == 11){
        cout << "Junior, my favorite year." << endl;
        yearName = "junior";
        junior.push_back(Student(name,studentID));
    }else if(year == 12){
        cout << "Oh, You're a senior!!! That's exciting!" << endl;
        yearName = "senior";
        senior.push_back(Student(name,studentID));
    }else{
        cout << "I didn't get that, try again. 9, 10, 11, or 12" << endl;
        cin >> year;
    }

    cout << "Favorite Class??" << endl;
    cin >> className;

    cout << "How many credits??" << endl;
    cin >> classCredits;

    if(!className.empty()){
        cout << "Nice! I'm not a fan of " << className << " and it's a " << classCredits << " class! Wow!" << endl;
        cout << "What was your grads? A B C D or F " << endl;
    }

    cin >> courseGrade;
    cout << "Ok ok ok, "<< courseGrade << " grade, nice work as a " << yearName << "!" << endl;

    grade.push_back(Grade(studentID,courseID,courseGrade));
    course.push_back(Course(courseID,className,classCredits));
    
    return 0;
}


