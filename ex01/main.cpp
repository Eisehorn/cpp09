#include <stack>
#include <iostream>

void    operation(std::stack<int> &stack, char op) {
    int i;
    int j;
    int result;

    i = stack.top();
    stack.pop();
    j = stack.top();
    stack.pop();

    if (op == '+')
        result = i+j;
    else if (op == '-')
        result = j-i;
    else if (op == '*')
        result = i*j;
    else if (op == '/')
        result = j/i;
    stack.push(result);
}

int     main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Error: bad arguments" << std::endl;
        return 0;
    }
    int i = 0;
    int j = 0;
    std::stack<int> stack;
    while (argv[1][i] != '\0') {
        if (argv[1][i] == 32) {
            i++;
            continue ;
        }
        else if (argv[1][i] >= 48 && argv[1][i] <= 57) {
            stack.push(argv[1][i] - 48);
            i++;
            j++;
            continue ;
        }
        else if ((argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' || argv[1][i] == '/') && j >= 2) {
            operation(stack, argv[1][i]);
            i++;
            j--;
            continue ;
        }
        else {
            std::cout << "Error" << std::endl;
            return 0;
        }
    }
    if (j == 1)
        std::cout << stack.top() <<std::endl;
    else
        std::cout << "Error" << std::endl;
    return 0;
}
