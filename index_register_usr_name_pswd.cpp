#include <iostream>
#include <string>

const int MAX_USERS = 100; // Maximum number of users
const int MAX_USERNAME_LENGTH = 50; // Maximum length for a username
const int MAX_PASSWORD_LENGTH = 50; // Maximum length for a password

int main() {
    std::string usernames[MAX_USERS];
    std::string passwords[MAX_USERS];

    int numUsers = 0;
    int val;
    cin>>val;
    if(val==1){
    while (numUsers < MAX_USERS) {
        std::string username, password;

        std::cout << "Enter a username (up to 50 characters): ";
        std::cin >> username;

        if (username == "exit") {
            break; // Exit the loop if the user enters "exit"
        }

        std::cout << "Enter a password (up to 50 characters): ";
        std::cin >> password;

        // Check if the username and password are within the allowed length
        if (username.length() > MAX_USERNAME_LENGTH || password.length() > MAX_PASSWORD_LENGTH) {
            std::cout << "Username or password is too long. Try again.\n";
            continue;
        }

        // Store the username and password in the arrays
        usernames[numUsers] = username;
        passwords[numUsers] = password;

        numUsers++;
    }
    }

    // Display the stored usernames and passwords
    std::cout << "Stored Usernames and Passwords:\n";
    for (int i = 0; i < numUsers; i++) {
        std::cout << "User " << (i + 1) << ":\n";
        std::cout << "Username: " << usernames[i] << "\n";
        std::cout << "Password: " << passwords[i] << "\n";
    }

    return 0;
}
