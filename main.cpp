#include<iostream>
using namespace std;
int main()
{
    std::cout<<"Welcome to C++ Calculator running inside Docker Conatiner"<<endl;
    char op;
    float num1, num2;

    std::cout << "Enter operator: +, -, *, /: "<<std::endl;
    std::cin >> op;

    std::cout << "Enter two operands: "<<endl;
    std::cin >> num1 >> num2;

    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
           std:: cout << "Error! operator is not correct";
            break;
    }

    return 0;
}