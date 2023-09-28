#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generateRandomPassword(int length) {
    string password;
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";

    srand(time(0));

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int length;

    cout << "Random Password Generator" << endl;

    cout << "Enter the length of the password: ";
    cin >> length;

    string password = generateRandomPassword(length);

    cout << "Generated Password: " << password << endl;

    return 0;
}
