#include <iostream>
#include <string>
#include <vector>

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
    return 0;
}