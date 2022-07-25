#include <iostream> // simple include to write anything in c++
#include <Windows.h> // include this for windows functions like clear console ect
#include <string> // include this so we can use strings


using namespace std; // removes std::

string password; // storage for our passwords
string username; // storage for our usernames

void clear() // simple code to clear console & add color
{
    system("cls"); // clear console
    system("color 4"); // add color text
}

void login()
{
    clear(); // claling our void clear to run

    if (username == "Legend") // using an if to check if our username is = to what we set it as
    {
        cout << "Username is Correct!\n";
        Sleep(1050); // sleeping the console 

        if (password == "123") // using an if to check if our password is = to what we set it as
        {
            clear();
            cout << "Password is Correct!\n";
            Sleep(2500); // sleeping the console
            exit(9); // setting the exit code as 9 so it fully closes the console
        }
    }
}
int main() // main 
{
    system("start, https://github.com/Asmodeus-was-taken"); // start my github for u 
    clear(); // calling our void clear to run
    cout << "Simple Username & Password Application by Asmodeuš\n"; // write about the application & creator 
    cout << "\n\n\n"; // /n is for new lines 
    cout << "Please Enter your username\n";
    cin >> username; // allowing us to write something that will be stored in our username string
    cout << "Please Enter Your Password\n";
    cin >> password; // allowing us to write something that will stored in our password string
    login(); // calling our void login to run
    
}
