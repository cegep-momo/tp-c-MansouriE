#ifndef LOGS_H
#define LOGS_H

#include <string>
using namespace std;

class Logs {
private:
    string logsFileName;

public:
    // Constructor
    Logs(const string& logsFile = "logs.txt");

    // File operations
    void logger(const string& texte);

    // Utility methods
    bool fileExists() const;

};

#endif
