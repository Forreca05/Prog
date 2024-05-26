#include "Student.h"

class ErasmusStudent final : public Student {
public:
    ErasmusStudent(int id, const string& name, const string& course, const string& country) : Student(id, name, course), country_(country) {};
    const string& country() const {return country_;}
    string to_string() const override final {
        ostringstream out;
        out << id() << '/' << name() << '/' << course() << '/' << country();
        return out.str();
    }
private:
    std::string country_;
};