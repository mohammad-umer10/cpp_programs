#include<iostream>
using namespace std;

int main(){

    struct
    {
    string bookTitle;
    string bookAuthor;
    int bookPage;
    float bookprice;
    }book_Fuction;
 
    book_Fuction.bookTitle = "harry potter";
    book_Fuction.bookAuthor = "jams potter";
    book_Fuction.bookPage = 1050;
    book_Fuction.bookprice = 850;

    cout<<"Book Title: "<<book_Fuction.bookTitle<<endl;
    cout<<"Book Author: "<<book_Fuction.bookAuthor<<endl;
    cout<<"Book Pages: "<<book_Fuction.bookPage<<endl;
    cout<<"Book Price: "<<book_Fuction.bookprice<<endl;

return 0;
}