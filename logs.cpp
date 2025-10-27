#include <fstream>
#include <iostream>
#include <filesystem>
#include "logs.h"

#include <chrono>
#include <iomanip>


using namespace std;


Logs::Logs(const string& logsFile) : logsFileName(logsFile) {}


void Logs::logger(const string& texte) {
    ofstream file(logsFileName, ios::app);
    if (!file.is_open()) {
        cout << "Erreur : impossible d'ouvrir : " << logsFileName << "en écriture.\n";
        return;
    }

    auto now = chrono::system_clock::now();
    time_t t_c = chrono::system_clock::to_time_t(now);

    file << put_time(localtime(&t_c), "%Y-%m-%d %H:%M:%S") << " | "
         << texte << "\n";
}

// Check if file exists
bool Logs::fileExists() const {
    return filesystem::exists(logsFileName);
}