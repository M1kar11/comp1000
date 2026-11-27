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
}

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


//adding books by ISBN. If the book already exists 
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

//remove books by ISBN
void removeBook(const string& isbn) {
	auto it = remove_if(books.begin(), books.end(), [&](Book& b) {
		return b.getISBN() == isbn; //exactly by ISBN
		});
	
	if (it != books.end()) {
		books.erase(it, books.end());
		cout << "Book removed successfully!!!" << endl;
	} 
	else {
		cout << "Book wasn't found in the library. Please check the ISBN and try again." << endl;
	}
}

//search for books by title
void searchByTitle(const string& title) {
	bool found = false;
	for (auto& b : books) {
		if (b.getTitle() == title) {
			b.display();
			found = true;
		}
	}
	if (!found)
		cout << "No book found with that title you scum." << endl;
}

//search for book by ISBN
void searchByISBN(const string& isbn) {
	auto it = find_if(books.begin(), books.end(), [&](Book& b) {
		return b.getISBN() == isbn; //searches for a book with exact ISBN
		});

	if (it != books.end())
		it->display(); //displays the book if found
	else cout << "fuck you, no book found with that ISBN." << endl; //prints a message if no book found
}

//display all books sorted by author 

void displayBooks() {
	if (books.empty()) { //checks if the library is empty
		cout << "No books, can't read sorry."; //prints a message if the library is empty
		return;
	}

	sort(books.begin(), books.end(), [](Book& a, Book& b) {
		return a.getAuthor() < b.getAuthor();
		});

	cout << left << setw(25) << "Title"
		<< setw(20) << "Author"
		<< setw(15) << "ISBN"
		<< setw(10) << "Copies" << endl;
	cout << string(70, '-') << endl;

	for (const auto& b : books) {
		b.display();
	}
}