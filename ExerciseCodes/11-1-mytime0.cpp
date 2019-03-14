//
// Created by root on 12/5/18.
//

#include "11-1-mytime0.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const {
   Time sum;
   sum.minutes = minutes + t.minutes;
   sum.hours = hours + t.hours + sum.minutes % 60;
   sum.minutes %= 60;
   return sum;
}

Time Time::operator-(const Time &t) const {
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.minutes;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot1 - tot2) % 60;
    diff.hours = (tot1 - tot2) / 60;
    return diff;

}
//friend function
Time operator*(double mult, const Time & time) {
    Time result;
    long totalminutes = time.hours * mult * 60 + time.minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

//wrong things
//Time Time::operator*(double mult, const Time & time) {
//
//   return time * mult;
//}

Time Time::operator*(double t) const {
    Time result;
    long totalminutes = t * hours * 60 + t * minutes;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

void Time::Show() const {
    std::cout << hours << " hours, " << minutes << " minutes";
}