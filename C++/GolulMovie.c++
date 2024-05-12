// Program to display movie details using operator overload <<
#include <iostream>
#include <string>
using namespace std;
class Movie
{
private:
    string title;
    string director;
    int releaseYear;

public:
    Movie(const string &title, const string &director, int releaseYear) : title(title), director(director), releaseYear(releaseYear) {}

    friend ostream &operator<<(ostream &os, const Movie &movie)
    {
        os << "Title: " << movie.title << std::endl;
        os << "Director: " << movie.director << std::endl;
        os << "Release Year: " << movie.releaseYear << std::endl;
        return os;
    }
};

int main()
{
    string title, director;
    int releaseYear;

    getline(std::cin, title);
    getline(std::cin, director);
    cin >> releaseYear;

    Movie movie(title, director, releaseYear);

    cout << movie;

    return 0;
}