#include "PhoneBook.hpp"

int main(void) {
    PhoneBook book;
    std::string input = "";

    book.welcome();

    while (true) {
        std::cout << "> " << std::flush;
        std::cin >> input;

        if (input == "EXIT") {
            std::cout << " Exiting PhoneBook." << std::endl;
            break;
        } else if (input == "ADD") {
            book.addContact();
        } else if (input == "SEARCH") {
            book.printContacts();
            book.search();
        } else {
            std::cout << " Invalid command. Please enter ADD, SEARCH, or EXIT in uppercase." << std::endl;
        }
    }

    return 0;
}
