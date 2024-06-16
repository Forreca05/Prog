#include "Person.h"
#include <fstream>
#include <vector>

Person::Person(const std::string& name, const std::string& address, const std::string& phone) : name_(name), address_(address), phone_(phone) {}
std::string Person::get_name() const {return name_;}
std::string Person::get_address() const {return address_;}
std::string Person::get_phone() const {return phone_;}
void read_persons_data(const std::string& file_name, vector<Person>& persons) {
    std::ifstream in(file_name);
    std::string name, address, phone; 
    int i = 1;
    for (std::string line; getline(in, line);) {
        if (i == 1) name = line;
        if (i == 2) address = line;
        if (i == 3) {
            phone = line;
            persons.push_back(Person(name, address, phone));
            i = 0;
        }
        i++;
    }
}
bool compare_by_name(const Person& p1, const Person& p2) {
    return p1.get_name() < p2.get_name();
}

void sort_persons_by_name(std::vector<Person>& persons) {
    std::sort(persons.begin(), persons.end(), compare_by_name);
}

void show_persons_data(const std::vector<Person>& persons) {
    for (const auto& p : persons) {
        std::cout << "Name: " << p.get_name() << ", Address: " << p.get_address() << ", Phone: " << p.get_phone() << std::endl;
    }
}