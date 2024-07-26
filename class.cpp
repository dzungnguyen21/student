#include<bits/stdc++.h>
using namespace std;


class Students {
    private:
        string name;
        int age;
    
    public:
        Students(string, int);
        void introduce();
};

Students::Students(string NAME, int AGE) {
    name = NAME;
    age = AGE;
}

// Define the introduce function to print student details
void Students::introduce() {
	// Print the student's name
    cout << "My name is " << name << endl;
    // Print the student's age
    cout << "I'm " << age << " years old";    
}

int main() {
    // Create an object student_1 of the Students class
    Students student_1("Dung", 21);

    // Call the introduce function to print student_1's details
    student_1.introduce();
    
    return 0;
}
