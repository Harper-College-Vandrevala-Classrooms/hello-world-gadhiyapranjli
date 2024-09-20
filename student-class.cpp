#include <iostream>
#include <string>
#include <cassert>

class Student {
private:
    string first_name;
    string last_name;


public:
    Student(string first_name, string last_name)
        : first_name(first_name), last_name(last_name), student_id
    }

    string get_first_name() const {
        return first_name;
    }

    void set_first_name(const string& first_name) {
        this->first_name = first_name;
    }

    string get_last_name() const {
        return last_name;
    }

    void set_last_name(const string& last_name) {
        this->last_name = last_name;
    }

    int get_student_id() const {
        return student_id;
    };

int main() {
  Student student = Student("Bob", "Bobberson");

  assert(student.first_name == "Bob");
  assert(student.number_of_credits == 0);

  student.add_credits(6);
  student.add_credits(2);

  assert(student.number_of_credits == 8);

  student.reset_credits();

  assert(student.number_of_credits == 0);

  return 0;
}
