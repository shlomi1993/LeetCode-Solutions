#include "logger.hpp"

// Implementation of Logger class

std::string Logger::currentDateTime() {
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
    return buffer;
}

void Logger::log(const std::string& label, const std::string& message) {
    std::cout <<  "[" + Logger::currentDateTime() + "] " + label + " " + message << std::endl;
}

void Logger::info(const std::string& message) {
    Logger::log("[INFO]", message);
}

void Logger::debug(const std::string& message) {
    Logger::log("[DEBUG]", message);
}

void Logger::warning(const std::string& message) {
    Logger::log("[WARNING]", message);
}

void Logger::error(const std::string& message) {
    Logger::log("[ERROR]", message);
}


