#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
    public:
        Student(int student_id_i, string name_i){
            name = name_i;
            student_id = student_id_i;
        }

        int get_student_id(){
            return student_id;
        }
        string get_name(){
            return name;
        }
    private:
        int student_id;
        string name;
};

class Course{
    public:
        Course(int class_id_i, string course_i, int credits_i){
            class_id = class_id_i;
            course = course_i;
            credits = credits_i;
        }

        int get_class_id(){
            return class_id;
        }
        string get_course(){
            return course;
        }
        int get_credits(){
            return credits;
        }
    private:
        int class_id;
        string course;
        int credits;
};

class Grade{
    public:
        Grade(int student_id_i, int class_id_i, char grade_i){
            student_id = student_id_i;
            class_id = class_id_i;
            grade = grade_i;
        }
        int get_student_id(){
            return student_id;
        }
        int get_class_id(){
            return class_id;
        }
        char get_grade(){
            return grade;
        }
    private:
        int student_id;
        int class_id;
        char grade;
};

int main(){
    Student newStudent;
    newStudent(1,"Lisa");
    
    // vector<Student> students;
        // students.push_back("Georgee P. Burdell");
    // students.push_back(2,"Nancy Rhodes");

    // vector<Course> courses;
    //     courses.push_back(1,"Algebra",5);
    //     courses.push_back(2,"Physics",4);
    //     courses.push_back(3,"English",3);
    //     courses.push_back(4,"Economics",4);

    // vector<Grade> grades;
    //     grades.push_back(1,1,'B');
    //     grades.push_back(1,2,'A');
    //     grades.push_back(1,3,'C');
    //     grades.push_back(2,1,'A');
    //     grades.push_back(2,2,'A');
    //     grades.push_back(2,4,'B');

    float GPA = 0.0f;
    // int id;

    cout << "students size:  " << students.size() << endl;


    return 0; 
}