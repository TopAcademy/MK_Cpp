#include <iostream>
#include <tuple>
using std::cout;

typedef std::tuple<short, short, short> TimeHMS;

class Time
{
protected:
    unsigned int value;

public:
    // Default constructor
    Time() { value = 0; }
    
    // Set time value by given h;m;s
    void set_hms(short h, short m, short s) {
        if (h > 23 || m > 59 || s > 59) throw "Invalid time";
        this->value = h*3600 + m*60 + s;
    }
    
    // Get H;M;S representation of time value
    TimeHMS get_hms() {
        short h = value / 3600;
        short m = (value % 3600) / 60;
        short s = ((value % 3600) % 60);
        return { h, m, s };
    }
    
    // Display time on console as h:mm:ss
    void show() {
        TimeHMS t = get_hms();
        short h = std::get<0>(t);
        short m = std::get<1>(t);
        short s = std::get<2>(t);
        cout << h << ':'
             << ((m < 10)?"0":"") << m << ':'
             << ((s < 10)?"0":"") << s << std::endl;
    }
    
};
