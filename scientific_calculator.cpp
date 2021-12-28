#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
protected:
    float num1, num2;
    int op;

public:
    Calculator(){};
    void Cal(float n1, float n2, int optr)
    {
        switch (optr)
        {
        case 1:
            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;
        case 2:
            cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
            break;
        case 3:
            cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
            break;
        case 4:
            cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
            break;
        default:
            cout << "ERROR! Invalid Operator. " << endl;
            break;
        }
    }
};

class Scientific_Calc : public Calculator
{
protected:
    float x;
    float result;

public:
    Scientific_Calc(){};
    void Calc(float theta, int func)
    {
        switch (func)
        {
        case 5:
            cout << "e^(theta) : " << exp(theta) << endl;
            break;
        case 6:
            cout << "sqrt(theta) : " << sqrt(theta) << endl;
            break;
        case 7:
            result = sin(theta * (3.14 / 180));
            cout << "Sin(theta) : " << result << endl;
            break;
        case 8:
            result = cos(theta * (3.14 / 180));
            cout << "Cos(theta) : " << result << endl;
            break;
        case 9:
            result = tan(theta * (3.14 / 180));
            cout << "Tan(theta) : " << result << endl;
            break;
        case 10:
            result = sinh(theta);
            cout << "Sinh(theta) : " << result << endl;
            break;
        case 11:
            result = cosh(theta);
            cout << "Cosh(theta) : " << result << endl;
            break;
        case 12:
            result = tanh(theta);
            cout << "Tanh(theta) : " << result << endl;
            break;
        case 13:
            cout << "log(theta) : " << log(theta) << endl;
            break;
        case 14:
            cout << "log10(theta) : " << log10(theta) << endl;
            break;
        case 15:
            cout << "Rounding off (theta) : " << round(theta) << endl;
            break;
        default:
            cout << "ERROR! Invalid Scientific Function. " << endl;
            break;
        }
    }
};
int main()
{
    int func, choice, op;
    float num1, num2, x;
    Scientific_Calc c1;
    Calculator c2;
    cout << "************************** Calculator **************************" << endl;
    // cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.sin\n6.sinh\n7.cos\n8.cosh\n9.tan\n10.tanh\n11.exponential\n12.log with base 10\n13.round off\n14.Exit"<<endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "Operations\t"
         << "\tTrigonometric Functions"
         << "\t\tLogarithmic Functions" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "1: Addition\t\t"
         << "7: Sin\t\t"
         << "\t\t13: Log" << endl;
    cout << "2: Subtraction\t\t"
         << "8: Cos\t\t"
         << "\t\t14: Log with base 10" << endl;
    cout << "3: Multiplication\t"
         << "9: Tan\t\t"
         << "\t\t15: Round off" << endl;
    cout << "4: Division\t\t"
         << "10: Sinh" << endl;
    cout << "5: Exponent\t\t"
         << "11: Cosh" << endl;
    cout << "6: Square root\t\t"
         << "12: Tanh" << endl;
    while (1)
    {

        cout << "Enter the Function b/w (1-15): " << endl;
        cin >> func;
        if (func <= 4)
        {
            cout << "Enter the First Number: " << endl;
            cin >> num1;
            cout << "Enter the Second Number: " << endl;
            cin >> num2;
            c1.Cal(num1,num2,func);
        }
        else
        {
            cout << "Enter the value of theta or x : " << endl;
            cin >> x;
            c1.Calc(x, func);
        }
    }
    return 0;
}