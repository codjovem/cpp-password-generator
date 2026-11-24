#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*";
    string password = "";

    int length;

    cout << "Password length: ";
    cin >> length;

    random_device rd;
    mt19937 generator(rd());

    uniform_int_distribution<int> distribution(0, characters.size() - 1);

    for (int i = 0; i < length; i++) {
        password += characters[distribution(generator)];
    }

    cout << "\nGenerated password: " << password << endl;

    return 0;
}
