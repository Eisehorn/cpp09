#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Error" <<std::endl;
        return 0;
    }
    std::string args;
    int i = 1;
    while (argv[i]) {
        if (atoi(argv[i]) < 0) {
            std::cout << "Error" <<std::endl;            
            return 0;
        }
        if (i != 0)
            args += std::string(" ");
        args += std::string(argv[i]);
        i++;
    }
    std::cout << "Before : " << args << std::endl;
    
}