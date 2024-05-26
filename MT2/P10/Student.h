#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "Person.h"

class Student : public Person {
public:
    Student(int id, const string& name, const string& course) : Person(id, name), course_(course) {}
    const string& course() const {return course_;}
    string to_string() const override {
        ostringstream out;
        out << id() << '/' << name() << '/' << course_;
        return out.str();
    }
private:
    std::string course_;
};

#endif