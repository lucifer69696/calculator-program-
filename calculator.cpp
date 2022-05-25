#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double a, b;
float d, c;
class calculatorsimple
{
public:
    double a, b;
    double sum(double a, double b);
    double subrate(double a, double b);
    double product(double a, double b);
    double divide(double a, double b);
};
double calculatorsimple ::sum(double a, double b)
{
    cout << "You select sum enter first digit of sum" << endl;
    cin >> a;
    cout << "You select sum enter second digit of sum" << endl;
    cin >> b;
    cout << "the sum of a + b is : ";
    return a + b;
}
double calculatorsimple ::subrate(double a, double b)
{
    cout << "You select subrate enter first digit of sum" << endl;
    cin >> a;
    cout << "You select subrate enter second digit of sum" << endl;
    cin >> b;
    cout << "the subrate of a - b is : ";
    return a - b;
}
double calculatorsimple ::product(double a, double b)
{
    cout << "You select product enter first digit of sum" << endl;
    cin >> a;
    cout << "You select product enter second digit of sum" << endl;
    cin >> b;
    cout << "the product of a * b is : ";
    return a * b;
}
double calculatorsimple ::divide(double a, double b)
{
    cout << "You select divide enter first digit of sum" << endl;
    cin >> a;
    cout << "Enter second digit of sum" << endl;
    cin >> b;
    cout << "the the division of a / b is : ";
    return a / b;
}

class sciencecalculator
{
public:
    float sin1(float a, float b);
    float log1(float a, float b);
    float tan1(float a, float b);
    float cos1(float a, float b);
};
float sciencecalculator ::cos1(float a, float b)
{
    cout << "You selested cos \nEnter the first number cos" << endl;
    cin >> a;
    cout << "Enter the second number of cos" << endl;
    cin >> b;
    cout << "The cos of two number is :" << cos(a) << " " << cos(b) << endl;
}
float sciencecalculator ::log1(float a, float b)
{
    cout << "You selested log \nEnter the first number of log" << endl;
    cin >> a;
    cout << "Enter the second number of log" << endl;
    cin >> b;
    cout << "The log of two number is :" << log(a) << " " << log(b) << endl;
}
float sciencecalculator ::sin1(float a, float b)
{
    cout << "You selested sin \nEnter the first number of sin" << endl;
    cin >> a;
    cout << "Enter the second number of sin" << endl;
    cin >> b;
    cout << "The sin of two number is :" << sin(a) << "  " << sin(b) << endl;
}
float sciencecalculator ::tan1(float a, float b)
{
    cout << "You selested  \nEnter the first number of tan " << endl;
    cin >> a;
    cout << "Enter the second number of tan" << endl;
    cin >> b;
    cout << "The tan of two number is :" << tan(a) << " " << tan(b) << endl;
}
class display : public calculatorsimple, public sciencecalculator
{
public:
    void show();
};

void display ::show()
{
    cout<<"For sum press + \nFor subrate press - \nFor product press * \nFor division press /\nFor cos write cos \nFor sin write sin\nfor log write log \nFor tan write tan "<<endl;
    cout << "selest your opration ";
    string opr;
    cin >> opr;
    if (opr == "+")
    {
        cout << sum(a, b);
    }
    else if (opr == "-")
    {
        cout << subrate(a, b);
    }
    else if (opr == "*")
    {
        cout << product(a, b);
    }
    else if (opr == "/")
    {
        cout << divide(a, b);
    }
    else if (opr == "sin")
    {
        cout << sin1(d, c);
    }
    else if (opr == "cos")
    {
        cout << cos1(d, c);
    }
    else if (opr == "log")
    {
        cout << log1(d, c);
    }
    else if (opr == "tan"){
        cout<<tan1(d,c);
    }
}
int main()
{
display dc ;
dc.show();
    return 0;
}