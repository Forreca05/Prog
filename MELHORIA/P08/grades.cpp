#include "Student.h"

Student::Student(const std::string& id) : id_(id) {}
std::string Student::get_id() const {return id_;}
void Student::add(const course& c) {courses_.push_back(c);}
double Student::avg() const {
    double grade = 0.00;
    double credit = 0.00;
    for (auto kv : courses_) {
        grade += (kv.credits * kv.grade);
        credit += kv.credits;
    }
    if (credit == 0) return 0.00;
    return grade / credit;
}