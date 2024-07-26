#include<bits/stdc++.h>
using namespace std;

// Define the Students class
class Students {
    private:
        // Declare private member variables
        string name;
        int age;
    
    public:
        // Declare the parameterized constructor
        Students(string, int);

        // Declare a public member function to introduce the student
        void introduce();
};

// Define the constructor of the Students class
Students::Students(string NAME, int AGE) {
    // Assign values to the member variables
    name = NAME;
    age = AGE;
}

// Define the introduce function to print student details
void Students::introduce() {
    cout << "My name is " << name << endl;     // Print the student's name
    cout << "I'm " << age << " years old";     // Print the student's age
}

int main() {
    // Create an object student_1 of the Students class
    Students student_1("Dung", 21);

    // Call the introduce function to print student_1's details
    student_1.introduce();
    
    return 0;
}

