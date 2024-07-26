#include <iostream>
using namespace std;

// Definition of the Student class
class Student {
public:
    string name;    
    int roll_no;     
    string sur_name;

    // Method to set the values of the member variables
    void values(int roll_no, string name, string sur_name) {
        this->name = name;           
        this->roll_no = roll_no;     
        this->sur_name = sur_name; 
        cout << "The address of this pointer is: " << this << endl; // Print the address of 'this' pointer
    }
};

int main() {
    Student s1;  // Creating an object of the Student class
    s1.values(10, "Likitha", "Heena");  // Setting values for the object
    cout << "Address of object is: " << &s1 << endl;  // Printing the address of the object
    return 0;
}
