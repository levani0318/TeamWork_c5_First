/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Declare abstract class Person
class Person {
public:
    virtual ~Person() {}
    virtual string getLastName() const = 0;
    virtual string getFirstName() const = 0;
};

// Declare abstract class Lecturer, which inherits from Person
class Lecturer : public Person {
public:
    virtual ~Lecturer() {}
    virtual string getSubjectName() const = 0;
};

// Declare abstract class Student, which inherits from Person
class Student : public Person {
public:
    virtual ~Student() {}
    virtual string getCourse() const = 0;
};

// Declare abstract class Subject
class Subject {
public:
    virtual ~Subject() {}
    virtual string getName() const = 0;
};

// Define class SkillWillLecturer, which inherits from Lecturer
class SkillWillLecturer : public Lecturer {
public:
    SkillWillLecturer(string last_name, string first_name, string subject_name, int chapter, int level)
        : last_name_(last_name), first_name_(first_name), subject_name_(subject_name), chapter_(chapter), level_(level) {}

    string getLastName() const {
        return last_name_;
    }

    string getFirstName() const {
        return first_name_;
    }

    string getSubjectName() const {
        return subject_name_;
    }

    int getChapter() const {
        return chapter_;
    }

    int getLevel() const {
        return level_;
    }

private:
    string last_name_;
    string first_name_;
    string subject_name_;
    int chapter_;
    int level_;
};

// Define class SkillWillStudent, which inherits from Student
class SkillWillStudent : public Student {
public:
    SkillWillStudent(string last_name, string first_name, string course, string section, int quiz_score)
        : last_name_(last_name), first_name_(first_name), course_(course), section_(section), quiz_score_(quiz_score) {}

    string getLastName() const {
        return last_name_;
    }

    string getFirstName() const {
        return first_name_;
    }

    string getCourse() const {
        return course_;
    }

    string getSection() const {
        return section_;
    }

    int getQuizScore() const {
        return quiz_score_;
    }

private:
    string last_name_;
    string first_name_;
    string course_;
    string section_;
    int quiz_score_;
};

// Define class SkillWillSubject, which inherits from Subject
class SkillWillSubject : public Subject {
public:
    SkillWillSubject(string name, int duration, string begin_time, string last_lecture_title)
        : name_(name), duration_(duration), begin_time_(begin_time), last_lecture_title_(last_lecture_title) {}

    string getName() const {
        return name_;
    }

    int getDuration() const {
        return duration_;
    }

    string getBeginTime() const {
        return begin_time_;
    }

    string getLastLectureTitle() const {
        return last_lecture_title_;
    }

private:
    string name_;
    int duration_;
    string begin_time_;
    string last_lecture_title_;
};

int main() {
    // Create some SkillWillLecturer objects
    SkillWillLecturer lecturer1("Smith", "John", "Math", 3, 2);
    SkillWillLecturer lecturer2("Doe", "Jane", "English", 2, 4);

    // Create some SkillWillStudent objects
    SkillWillStudent student1("Johnson", "Bob", "Math", "A", 85);
    


    return 0;
}
