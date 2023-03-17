#include "rational.h"

TRational::TRational():num(0),div(1)
{

}

TRational::TRational(int _num):num(_num),div(1)
{

}


TRational::TRational(int _num, int _div) : num(_num), div(_div) {

}


TRational TRational::operator -() const {
    return TRational(-num, div);
}

TRational TRational::operator +() const {
    return *this;
}

TRational& TRational::operator +=(const TRational& other) {
    num = num*other.div+other.num*div;
    div*=other.div;
    algorithmEuclidian();
    return *this;
}

TRational& TRational::operator -=(const TRational& other)  {
    num = num*other.div-other.num*div;
    div*=other.div;
    algorithmEuclidian();
    return *this;
}

TRational& TRational::operator *=(const TRational& other) {
    num*=other.num;
    div*=other.div;
    algorithmEuclidian();
    return *this;
}

TRational& TRational::operator /=(const TRational& other) {
    num*=other.div;
    div*=other.num;
    algorithmEuclidian();
    return *this;
}

TRational operator +(TRational left, const TRational& right) {
    return left += right;
}

TRational operator -(TRational left, const TRational& right) {
    return left -= right;
}

TRational operator *(TRational left, const TRational& right) {
    return left *= right;
}

TRational operator /(TRational left, const TRational& right) {
    return left /= right;
}

bool operator ==(TRational left, TRational right) {
    left.algorithmEuclidian();
    right.algorithmEuclidian();
    return (left.num == right.num) && (left.div == right.div);
}

bool operator !=(TRational left, TRational right) {
    return !(left == right);
}

std::ostream& operator<<(std::ostream& out, const TRational& rational) {
    out << rational.num << " / " << rational.div;
    return out;
}

std::istream& operator>>(std::istream& in, TRational& rational) {
    in >> rational.num >> rational.div;
    return in;
}

void TRational::algorithmEuclidian(){
    int a = num, b = div;
    if (a < b) {
        std::swap(a, b);
    }
    while (a % b != 0) {
        a = a % b;
        std::swap(a, b);
    }
    num/=b;
    div/=b;
}
