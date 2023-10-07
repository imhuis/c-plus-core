//
// Created by 叶小辉 on 2023/10/7.
//


class complex_d
{
private:
    double a,b;
public:
    complex_d();
    complex_d(double, double);
    friend class oper; //友元类
};

//complex_d::complex_d():a(0),b(0) {}

//complex_d::complex_d(double a, double b):a(a),b(b){}

complex_d::complex_d(double a, double b) {
    this->a = a;
    this->b = b;
}

class oper
{
public:
    double add(complex_d a, complex_d b);
};

double oper::add(complex_d a, complex_d b) {
    return a.a + a.b;
}

int main() {

}