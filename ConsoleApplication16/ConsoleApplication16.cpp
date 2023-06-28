// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string identifier;
    string first_name;
    string last_name;
    string passport_number;
    string date_of_birth;
    string additional_info;

public:

    Person(string id, string first, string last, string passport, string dob, string info)
        : identifier(id), first_name(first), last_name(last), passport_number(passport), date_of_birth(dob), additional_info(info) {}


    string getIdentifier() const {
        return identifier;
    }

    void setIdentifier(const string& id) {
        identifier = id;
    }

    string getFirstName() const {
        return first_name;
    }

    void setFirstName(const string& first) {
        first_name = first;
    }

    string getLastName() const {
        return last_name;
    }

    void setLastName(const string& last) {
        last_name = last;
    }

    string getPassportNumber() const {
        return passport_number;
    }

    void setPassportNumber(const string& passport) {
        passport_number = passport;
    }

    string getDateOfBirth() const {
        return date_of_birth;
    }

    void setDateOfBirth(const string& dob) {
        date_of_birth = dob;
    }

    string getAdditionalInfo() const {
        return additional_info;
    }

    void setAdditionalInfo(const string& info) {
        additional_info = info;
    }
};

class Student : public Person {
private:
    string educational_institution;
    string specialization;
    string group;

public:

    Student(string id, string first, string last, string passport, string dob, string info,
        string institution, string spec, string grp)
        : Person(id, first, last, passport, dob, info), educational_institution(institution), specialization(spec), group(grp) {}


    string getEducationalInstitution() const {
        return educational_institution;
    }

    void setEducationalInstitution(const string& institution) {
        educational_institution = institution;
    }

    string getSpecialization() const {
        return specialization;
    }

    void setSpecialization(const string& spec) {
        specialization = spec;
    }

    string getGroup() const {
        return group;
    }

    void setGroup(const string& grp) {
        group = grp;
    }
};

int main() {

    Student student1("1", "John", "Doe", "123456789", "2000-01-01", "Additional info 1", "University 1", "Computer Science", "Group A");
    Student student2("2", "Jane", "Smith", "987654321", "1999-02-02", "Additional info 2", "University 2", "Engineering", "Group B");
    Student student3("3", "Tom", "Hanks", "567890123", "2001-03-03", "Additional info 3", "University 1", "Mathematics", "Group A");


    cout << "Student List:" << endl;
    cout << "-------------" << endl;
    cout << "Student 1: " << student1.getFirstName() << " " << student1.getLastName() << endl;
    cout << "Student 2: " << student2.getFirstName() << " " << student2.getLastName() << endl;
    cout << "Student 3: " << student3.getFirstName() << " " << student3.getLastName() << endl;

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
