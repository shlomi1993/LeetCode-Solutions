#include "utils.hpp"

// Implementation of Logger class

void Logger::info(const std::string& message) {
    std::cout << "[" << currentDateTime() << "] [INFO]    " << message << std::endl;
}

void Logger::debug(const std::string& message) {
    std::cout << "[" << currentDateTime() << "] [DEBUG]   " << message << std::endl;
}

void Logger::warning(const std::string& message) {
    std::cerr << "[" << currentDateTime() << "] [WARNING] " << message << std::endl;
}

void Logger::error(const std::string& message) {
    std::cerr << "[" << currentDateTime() << "] [ERROR]   " << message << std::endl;
}

std::string Logger::currentDateTime() {
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
    return buffer;
}
