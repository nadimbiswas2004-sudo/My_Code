#include <iostream>
#include <sstream>
#include <iomanip>

bool isValidTime(int hours, int minutes, int seconds) {
    // Check if hours, minutes, and seconds are within valid ranges
    if (hours < 0 || hours > 23) return false;
    if (minutes < 0 || minutes > 59) return false;
    if (seconds < 0 || seconds > 59) return false;
    return true;
}

bool extractTime(const std::string& timeStr, int& hours, int& minutes, int& seconds) {
    std::stringstream ss(timeStr);
    char colon1, colon2;
    
    // Attempt to parse the time string
    if (ss >> hours >> colon1 >> minutes >> colon2 >> seconds) {
        // Check if the format is correct and the delimiters are colons
        if (colon1 == ':' && colon2 == ':') {
            return true;
        }
    }
    return false;
}

int main() {
    std::string timeStr;
    int hours, minutes, seconds;

    std::cout << "Enter time (HH:MM:SS): ";
    std::cin >> timeStr;

    if (extractTime(timeStr, hours, minutes, seconds)) {
        if (isValidTime(hours, minutes, seconds)) {
            std::cout << "Valid time: " << std::setw(2) << std::setfill('0') << hours 
                      << ":" << std::setw(2) << std::setfill('0') << minutes 
                      << ":" << std::setw(2) << std::setfill('0') << seconds << std::endl;
        } else {
            std::cout << "Invalid time: Time values out of range." << std::endl;
        }
    } else {
        std::cout << "Invalid time format. Please use HH:MM:SS." << std::endl;
    }

    return 0;
}
