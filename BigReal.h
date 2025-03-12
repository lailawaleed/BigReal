#ifndef A2_TASK2
#define A2_TASK2

#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

class BigReal
{
private:
    char sign;
    string wholePart;
    string floatPart;
private:

    void adjust_correct_format(BigReal&);
    void PadZeros(string&, int, bool);
    void correct_number(BigReal&);

    bool is_valid_real(string);
    bool isNegative();

    BigReal generate_complement(BigReal);
    string plus(BigReal&, bool = true);
    BigReal subtract(BigReal&);
    bool isZero();
public:
    BigReal(double = 0.0);
    BigReal(string);
    BigReal(const BigReal& otherReal);

    BigReal& operator=(const BigReal& otherReal);
    BigReal operator-(BigReal&);
    BigReal operator+(BigReal&);

    int size();
    int getSign();
    void setNum(string);

    bool operator<(BigReal&);
    bool operator>(BigReal&);
    bool operator==(BigReal&);
    friend ostream& operator<<(ostream& out, const BigReal&);

};

#endif //A2_TASK2
