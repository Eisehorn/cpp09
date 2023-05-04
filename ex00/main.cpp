#include "BitcoinExchange.hpp"
#include "Exception.hpp"

int main(int argc, char **argv) {
    if (argc < 2)
	{
		std::cout << "Needed file input!" << std::endl;
		return (1);
	}
	try
	{
		std::string confFile("./data.csv");
		BitcoinExchange object(confFile);
		std::string temp(argv[1]);
		object.readfileinput(temp);
		object.exec_input();
	}
	catch(const Exception::ErrorFile &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}