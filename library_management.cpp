#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
    string author;
    bool issued;
};

int main() {

    Book b[100];
    int n = 0;
    int choice;

    do {
        system("cls");
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {

            cout << "Enter Book ID: ";
            cin >> b[n].id;

            cout << "Enter Book Name: ";
            cin >> b[n].name;

            cout << "Enter Author Name: ";
            cin >> b[n].author;

            b[n].issued = false;

            n++;

            cout << "Book Added Successfully\n";
        }

        else if(choice == 2) {

            cout << "\n--- Book List ---\n";

            for(int i=0;i<n;i++) {

                cout << "\nID: " << b[i].id;
                cout << "\nName: " << b[i].name;
                cout << "\nAuthor: " << b[i].author;

                if(b[i].issued)
                cout << "\nStatus: Issued\n";
                else
                cout << "\nStatus: Available\n";
            }
        }

        else if(choice == 3) {

            int id;
            cout << "Enter Book ID to search: ";
            cin >> id;

            bool found = false;

            for(int i=0;i<n;i++) {

                if(b[i].id == id) {

                    cout << "\nBook Found\n";
                    cout << "Name: " << b[i].name << endl;
                    cout << "Author: " << b[i].author << endl;

                    found = true;
                }
            }

            if(!found)
            cout << "Book not found\n";
        }

        else if(choice == 4) {

            int id;
            cout << "Enter Book ID to issue: ";
            cin >> id;

            for(int i=0;i<n;i++) {

                if(b[i].id == id && !b[i].issued) {

                    b[i].issued = true;
                    cout << "Book Issued Successfully\n";
                }
            }
        }

        else if(choice == 5) {

            int id;
            cout << "Enter Book ID to return: ";
            cin >> id;

            for(int i=0;i<n;i++) {

                if(b[i].id == id && b[i].issued) {

                    b[i].issued = false;
                    cout << "Book Returned Successfully\n";
                }
            }
        }

    } while(choice != 6);

    return 0;
}