#pragma once

#ifndef GPA_H
    #define GPA_H
#endif //GPA_H
#include <string>

class student{
    public:
       

        
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