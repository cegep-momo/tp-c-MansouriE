#include <sstream>
#include <algorithm>
#include "book.h"

using namespace std;

// Default constructor
Book::Book() : titre(""), author(""), isbn(""), isAvailable(true), borrowerName("") {}

// Parameterized constructor
Book::Book(const string& titre, const string& author, const string& isbn) 
    : titre(titre), author(author), isbn(isbn) {}


// Getters
string Book::getTitre() const { return titre; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerName() const { return borrowerName; }


// Setters
void Book::setTitle(const string& titre) { this->titre = titre; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setISBN(const string& isbn) { this->isbn = isbn; }
void Book::setAvailability(const bool available) { this->isAvailable = available; }
void Book::setBorrowerName(const string& name) { this->borrowerName = name; }

// Methods
void Book::checkOut(const string& borrower){
    setAvailability(false);
    setBorrowerName(borrower);
}

void Book::returnBook(){
    setAvailability(true);
    setBorrowerName("");
}

string Book::toString() const {

}

string Book::toFileFormat() const {

}

void Book::fromFileFormat(const string& line) {

}