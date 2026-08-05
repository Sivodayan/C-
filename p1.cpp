#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int year;
};
int main()
{
    Book harryPotter;
    harryPotter.title = "Harry Potter and the Sorcerer's Stone";
    harryPotter.author = "J.K. Rowling";
    harryPotter.year = 1997;

    Book theHobbit;
    theHobbit.title = "The Hobbit";
    theHobbit.author = "J.R.R. Tolkien";
    theHobbit.year = 1937;
}
