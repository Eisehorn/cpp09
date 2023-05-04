#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <time.h>
#include <stdlib.h>

class BitcoinExchange {
	public:
		// Costructor
		BitcoinExchange(){};
		BitcoinExchange(std::string csvfile);
		BitcoinExchange (const BitcoinExchange &src); // Copy costructor
		~BitcoinExchange(){};
		BitcoinExchange &operator=(const BitcoinExchange &src); // Overload operator
		// Member function
		void									readfileinput(std::string inputfile);
		void									exec_input();						
		
	private:
		std::map<std::string, float> 			csvMap;
		std::multimap<std::string, float> 		inputMap;
};

#endif