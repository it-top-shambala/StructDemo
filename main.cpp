#include <iostream>

#include "Person.h"

using namespace std;

void PrintPerson(Person person);

int main() {
    Person person;
    person.first_name = "Andrey";
    person.last_name = "Starinin";
    person.date_of_birth.day = 18;
    person.date_of_birth.month = 2;
    person.date_of_birth.year = 1986;

    Date date;
    date.day = 1;
    date.month = 1;
    date.year = 1;
    Person person2 = CreatePerson("Dora", "Starinina", date);

    PrintPerson(person);
    PrintPerson(person2);

    return 0;
}

void PrintPerson(Person person) {
    cout << person.last_name << " " << person.first_name << ", " << person.date_of_birth.day << "." << person.date_of_birth.month << "." << person.date_of_birth.year << endl;
}
