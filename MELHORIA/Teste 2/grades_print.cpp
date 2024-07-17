#include <iostream>
#include <iomanip>
#include <map>
#include <list>

void grades_print(const std::map<std::string, std::list<int>>& grades) {
    std::map<double, std::string> ord;
    double avgg = 0;
    for (auto kv : grades) {
        double avg = 0;
        int s = 0;
        for (auto k : kv.second) {
            avg += k;
            s++;
        }
        avg /= s;
        avgg += avg;
        ord[avg] = kv.first;
    }
    for (auto kv : ord) {
        std::cout << std::fixed << std::setprecision(3) << kv.first;
        std::cout << ' ' << kv.second << std::endl;
    }
    std::cout << std::fixed << std::setprecision(3) << avgg / grades.size() << std::endl;
}

int main() {grades_print( {{"Jerry", {10, 20, 15}}} );
grades_print( {{"Elaine", {15, 18, 14, 16}}, {"Newman", {18, 12, 19}}} );
grades_print( {{"Whatley", {10, 10}}, {"Kramer", {11, 12, 14}}, {"Cosmo", { 15, 10, 13}}} );
grades_print( {{"Costanza", {0, 11}}, {"Frank", {8, 12}}} );
grades_print ( {{"Frank", {10, 15}}, {"Costanza", {10, 14}}} );}