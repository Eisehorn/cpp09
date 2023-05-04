#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

#include <iostream>

class Exception : public std::exception {
	public:
		class ErrorFile {
			public:
				std::string 				_str;

				ErrorFile(const std::string temp) : _str("Error: " + temp){};
				const char* what() const throw() {
					return _str.c_str();
				}
		};
		class ErrorData {
			public:
				std::string 				_str;

				ErrorData(const std::string temp) : _str("Error: " + temp){};
				const char* what() const throw() {
					return _str.c_str();
				}
		};
};

#endif