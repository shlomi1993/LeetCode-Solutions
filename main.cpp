#include "src/utils.hpp"

int main() {
    Logger::info("This is an information message.");
    Logger::debug("This is a debug message.");
    Logger::warning("This is a warning message.");
    Logger::error("This is an error message.");

    return 0;
}