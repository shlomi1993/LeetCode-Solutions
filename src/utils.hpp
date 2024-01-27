#ifndef SRC_UTILS_HPP
#define SRC_UTILS_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

class Logger {
public:
    // Logging functions
    static void info(const std::string& message);
    static void debug(const std::string& message);
    static void warning(const std::string& message);
    static void error(const std::string& message);

private:
    static std::string currentDateTime();
};

#endif // SRC_UTILS_HPP
