#include <iostream>
#include <fstream>
#include <regex>
#include <windows.h>

using namespace std;

const string red("\033[0;31m");
const string green("\033[1;32m");
const string yellow("\033[1;33m");
const string cyan("\033[0;36m");
const string magenta("\033[0;35m");
const string reset("\033[0m");


bool is_email_valid(const string& email) {
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    return regex_match(email, pattern);
}

class AboutUser {
public:
    string name;
    string last_name;
    int age;
    char gender;
    string email;
    string password;
};


int main() {

  cout << "[ ! ] Hello, welcome to my program :^)";
  Sleep(1200);
  system("cls");

  AboutUser about_User;
  ofstream MyFile("Send this to ..."); //<-- your name

  system("cls");

  cout << red << "[ ? ] Enter your name & last name:" << reset;
  cout << "\n\t[ : ] NAME: ";
  cin >> about_User.name;

  cout << "\n\t[ : ] LAST NAME: ";
  cin >> about_User.last_name;

  system("cls");

  ////////////////////////////////

  cout << red << "[ ? ] Enter your age: " << reset;
  cin >> about_User.age;
  system("cls");


  ////////////////////////////////


  cout << red << "[ ? ] Enter your gender M/F: " << reset;
  cin >> about_User.gender;
  system("cls");

  ////////////////////////////////

  cout << red << "[ ? ] Enter your e-mail: " << reset;
  cin >> about_User.email;

  cout << "\n[ . . . ] Checking if the e-mail is valid or it is not";
  Sleep(2500);
  cout << ".";
  Sleep(2500);
  cout << ".";
  Sleep(2500);
  cout << ".\n\n";

  cout << "[ ! ] " << about_User.email << (is_email_valid(about_User.email) ? " \033[1;32mVALID" : " \033[0;31mINVALID");

  Sleep(3000);

  cout << reset;


  ///////////////////////////////

  system("cls");
  cout << red << "\n\n\n[ ? ] Enter your password: " << reset;
  cin >> about_User.password;
  system("cls");



  ///////////////////////////////

  cout << yellow << "[ ! ] YOUR REGISTER IS SUCCESFULY PASSED" << reset;







  MyFile << "Name: " << about_User.name << "\nLast name: " << about_User.last_name << "\nAge: " << about_User.age << "\nGender: " << about_User.gender << "\nEmail: " << about_User.email << "\nPassword: " << about_User.password;

  MyFile.close();
}
