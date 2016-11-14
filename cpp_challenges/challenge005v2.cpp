/** 
 *  @file    challenge005v2.cpp
 *  @author  Ibar Romay 
 *  @github  rowmatrix  
 *  @date    10/05/2016 
 *  
 *  @brief password protected program
 *
 *
 */

#include <iostream>
#include <string>
using namespace std;

bool check(string username, string password)
{
    string correct_username = "hot";
    string correct_password = "dog";

    return (username == correct_username) && (password == correct_password);
}

string get_password()
{
    string password;
    cout << "Enter password: ";
    cin >> password;
    return password;
}

string get_username()
{
    string username;
    cout << "Enter username: ";
    cin >> username;
    return username;
}

int main(int argc, char const *argv[])
{

    while( !check(get_username(), get_password()) )
    {
        cout << "Incorrect! Try again." << endl;
    }

    cout << "Correct!" << endl;

    return 0;
}