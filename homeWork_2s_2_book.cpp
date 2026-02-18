// homeWork_2s_2_book.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstring>

typedef struct {
    std::string bookTitle;
    std::string bookAuthor;
    int bookYearPublication;
    
}BookInfo;

void printBook(BookInfo s) {
    std::cout << "\nInform of book: \n";
    std::cout << "Title: " << s.bookTitle << "\nAuthor: " << s.bookAuthor << "\nYearPublication: " << s.bookYearPublication <<std::endl;
}


int main()
{
    BookInfo bookInfo1;
    std::cout << "\nenter Title's Book: ";
    std::getline(std::cin, bookInfo1.bookTitle);
    std::cout << "\nenter Author's book: ";
    std::getline(std::cin, bookInfo1.bookAuthor);
    std::cout << "\nenter Year Publication: ";
    std::cin >> bookInfo1.bookYearPublication;

    printBook(bookInfo1);
    
    return 0;
}

