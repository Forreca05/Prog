#include <string>
#include <map>
#include <list>

std::string student_highest_avg(std::map<std::string, std::list<int>> m) {
    std::string a;
    double avg = 0.0;
    for (auto s : m) {
        double total = 0.0;
        double avg2;
        for (int n : s.second) {
            total+= n;
        }
        avg2 = total /s.second.size();
        if (avg2 > avg) {
            a = s.first;
            avg = avg2;
        }
    }
    return a;
}