#include <unordered_map>
#include <string>
#include <filesystem>
#include "logger.h"

using namespace std;

// Function Definitions for the Logger class from Logger.h
Logger::Logger() {
    // Intentionally left blank
} 

Logger::~Logger() {
    //cout << "THE PROGRAM SHOULD BE TERMINATING";
}

void Logger::addVersion(string& name, filesystem::path init,
                                      filesystem::path end) {
    FH::mkdirp( end / name );
    std::filesystem::copy_file(init, end / name); 
}

void Logger::deleteVersion(string& name, filesystem::path init,
                                         filesystem::path end) {

}


// Initialize static instance of Logger. 
// Logger* Logger::instance = nullptr;
// Cannot do in cpp and h at the same time
