#include "Student.h"

Student::Student(const std::string& id) : id_(id) {}
std::string Student::get_id() const {return id_;}
void Student::add(const course& c) {
    courses_.push_back(c);
}
double Student::avg() const {
    double average = 0, credites = 0.0;
    for (size_t i = 0; i < courses_.size(); i++) {
        average += courses_[i].credits * courses_[i].grade;
    }
    for (size_t i = 0; i < courses_.size(); i++) {
        credites += courses_[i].credits;
    }
    if (credites == 0) return 0.00;
    else return average / credites;
}