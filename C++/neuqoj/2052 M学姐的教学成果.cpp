#include <iostream>
using namespace std;
int main()
{
    string name, sentence1, sentence2;
    int age;
    char gender;
    double height;
    bool judge;

    sentence1 = "Hello,everyone!", name = "Luquanhao", sentence2 = "I'm glad to see you in our school!";
    age = 18;
    gender = 'M';
    height = 170.1;
    judge = 1;

    cout << sentence1 << endl;
    cout << "My name is" << " " << name << '.' << endl;
    cout << "And I am" << " " << age << " " << "years old now." << endl;
    cout << "My height is" << " " << height << "cm" << '.' << endl;
    cout << "My gender is"<< " " << gender << '.' << endl;
    cout << sentence2 << judge << endl;
    return 0;
}