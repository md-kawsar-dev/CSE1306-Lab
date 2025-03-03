#include <iostream>
using namespace std;
class Book{
    private:
        string title,author;
        int pages;
        float price;
    public:
        Book(string t,string a,int p,float pr)
        {
            title = t;
            author = a;
            pages = p;
            price = pr;
        }
        void displayInfo()
        {
            cout<<"The Book Title is: "<<title<<endl;
            cout<<"The Book Author is: "<<author<<endl;
            cout<<"The Book Pages is: "<<pages<<endl;
            cout<<"The Book Price is: "<<price<<endl;

        }
        void discount(int d)
        {
            price -= price*d/100;
        }

};
int main()
{
    Book book1("OOP in C++","Md Kawsar",500,250);
    book1.displayInfo();
    cout<<"============================="<<endl;
    book1.discount(5);
    book1.displayInfo();
    return 0;
}
