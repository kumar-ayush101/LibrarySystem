#include <iostream>
#include "../include/Library.hpp"
#include "../include/Account.hpp"

int main() {
    // 1. Get Library Instance
    Library& myLib = Library::getInstance();

    // 2. Create Books
    BookItem* book1 = new BookItem("123-ABC", "C++ Low Latency", "Bjarne", "BAR-001", 50.0);
    myLib.addBook(book1, "BAR-001");

    // 3. Create Users
    Member student("M001", "Alice");
    Librarian staff("L001", "Bob");

    // 4. Test Polymorphism & Logic
    std::cout << "--- Permissions Check ---\n";
    student.getDisplayPermissions();
    staff.getDisplayPermissions();

    std::cout << "\n--- Inventory Check ---\n";
    myLib.displayAllBooks();

    // Cleanup
    delete book1;
    return 0;
}