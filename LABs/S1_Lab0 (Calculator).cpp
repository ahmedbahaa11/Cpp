
#include <iostream>

int main() {
 
    int operand1 , operand2 , res = 0 ;
    char op ;
    while (1)    
    {
        std::cout << "Enter Equation : " ;
        std::cin >> operand1 ;
        std::cin >> op ;
        std::cin >> operand2 ;
        switch (op)
        {
            case '+' :
                        res = operand1 + operand2 ;
                        break;
            case '-' :
                        res = operand1 - operand2 ;
                        break;
            case '*' :
                        res = operand1 * operand2 ;
                        break;
            case '/' :
                        res = operand1 / operand2 ;
                        break;
            case '%' :
                        res = operand1 % operand2 ;
                        break;
            default : break;
        }
        std::cout << operand1 <<" "<< op <<" "<< operand2 <<" "<< "= " <<res << std::endl ;
    }
    return 0;
}