#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    std::list<int> l;
	std::deque<int> d;
    
    if (argc < 2) {
        std::cout << "Error" <<std::endl;
        return 0;
    }
    std::string args;
    int j = 1;
    int k;
    while (argv[j]) {
        if ((k = atoi(argv[j])) < 0) {
            std::cout << "Error" <<std::endl;            
            return 0;
        }
        if (j != 0) 
            args += std::string(" ");
        args += std::string(argv[j]);
        l.push_back(k);
        d.push_back(k);
        j++;
    }
    std::cout << "Before : " << args << std::endl;
	for (std::list<int>::iterator i = l.begin(); i != l.end(); i++)
		std::cout << " " << *i;
	std::cout << std::endl;
	std::cout << std::endl;

	std::clock_t start = std::clock();
	insertmerge(l.begin(), l.end());
	std::clock_t end = std::clock();
	double seconds = static_cast<double> (end - start) / CLOCKS_PER_SEC;

	std::cout << "After with std::list:";
	for (std::list<int>::iterator i = l.begin(); i != l.end(); i++)
		std::cout << " " << *i;
	std::cout << std::endl;
	std::cout << std::fixed << std::setprecision(9);
	std::cout << "Time: " << seconds << " seconds" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	std::clock_t startdeque = std::clock();
	insertmerge(d.begin(), d.end());
	std::clock_t enddeque = std::clock();
	double secondsdeque = static_cast<double>(enddeque - startdeque) / CLOCKS_PER_SEC;

	std::cout << "After with std::deque:";
	for (std::deque<int>::iterator i = d.begin(); i != d.end(); i++)
		std::cout << " " << *i;
	std::cout << std::endl;
	std::cout << "Time: " << secondsdeque << " seconds" << std::endl;
	std::cout << std::endl;
}