#include <iostream>
#include <vector>
#include "Date.h"
#include "Person.h"

using namespace std;

void born_before(const std::vector<Person>& persons, const Date& date) {
    date.show();
    std::cout << ": ";
    for (size_t i = 0; i < persons.size(); i++) {
        if (persons[i].get_birth_date().is_before(date)) {
            std::cout << persons[i].get_name() << '-';
            persons[i].get_birth_date().show();
            std::cout << ' ';
        }
    }
}