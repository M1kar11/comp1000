#include <iostream>
#include <iomanip> //used to align the output
#include <string>
using namespace std;

//define a class called book 

class Book {
	private:
		string title;
		string author;
		string isbn;
		int copies;


//define constructor to initialize book data
public:
	Book(string title, string author, string isbn, int copies) {
		this->title = title;
		this->author = author;
		this->isbn = isbn;
		this->copies = copies;
	}


//getter ???


//setter ???



//Display book info 
	void displayInfo() {
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "Copies: " << copies << endl;
	}
};

//adding books
void addBook(const Book& book) {
	auto it = find_if(books.begin(), books.end(), [&](Book& b) {
		return b.getISBN() == book.getISBN();
		});
	if (it != books.end()) { //book already exists
		cout << "Book already exists dude. Updating the number of copies instead." << endl;
		it->setTitle(book.getTitle());
		it->setAuthor(book.getAuthor());
		it->setCopies(it->getCopies() + book.getCopies());

	}
	else { //book does not exist, add it to the library
		books.push_back(book);
		cout << "Book added successfully! Whoop Whoop!!" << endl;
	}
}