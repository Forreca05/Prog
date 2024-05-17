#include <iostream>
#include <string>
#include <map>
#include <list>

std::string student_highest_avg(std::map<std::string, std::list<int>> m) {
    std::string high_student;
    double high_avg = 0.0;    
    for (const auto& entry : m) {
        const std::list<int>& grades = entry.second;
        double sum = 0.0;
        for (int grade : grades) {
            sum += grade;
        }
        double avg = sum / grades.size();
        if (avg > high_avg) {
            high_avg = avg;
            high_student = entry.first;
        }
    }
    return high_student;
}