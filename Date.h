#ifndef STRUCTDEMO_DATE_H
#define STRUCTDEMO_DATE_H

#include <string>

using namespace std;

enum DateFormat {
    Normal = 1, // dd.mm.yyyy
    ReverseNormal = 2, // yyyy.mm.dd
    SpecialNormal = 3, // dd-mm-yyyy
    ReverseSpecialNormal = 4 // yyyy-mm-dd
};

struct Date {
    int day;
    int month;
    int year;

    string ToString(DateFormat format = DateFormat::Normal) {
        switch (format) {
            case DateFormat::Normal: // dd.mm.yyyy
                return to_string(day) + "." + to_string(month) + "." + to_string(year);
            case DateFormat::ReverseNormal: // yyyy.mm.dd
                return to_string(year) + "." + to_string(month) + "." + to_string(day);
            case DateFormat::SpecialNormal:
                return to_string(day) + "-" + to_string(month) + "-" + to_string(year);
            case DateFormat::ReverseSpecialNormal: // yyyy-mm-dd
                return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
        }

    }
};

Date CreateDate(int year, int month, int day) {
    Date date;
    date.year = year;
    date.month = month;
    date.day = day;
    return date;
}

#endif //STRUCTDEMO_DATE_H
