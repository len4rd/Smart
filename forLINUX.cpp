#include <iostream>
#include <fstream>
#include <regex>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

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
  usleep(1200);
  system("clear");

  AboutUser about_User;
  ofstream MyFile("Send this to /*your name...*/");

  system("clear");

  cout << "\n\n\n";
  cout << red << "[ ? ] Enter your name & last name:" << reset;
  cout << "\n\t[ : ] NAME: ";
  cin >> about_User.name;

  cout << "\n\t[ : ] LAST NAME: ";
  cin >> about_User.last_name;

  system("clear");

  ////////////////////////////////

  cout << red << "[ ? ] Enter your age: " << reset;
  cin >> about_User.age;
  system("clear");


  ////////////////////////////////


  cout << red << "[ ? ] Enter your gender M/F: " << reset;
  cin >> about_User.gender;
  system("clear");

  ////////////////////////////////

  cout << red << "[ ? ] Enter your e-mail: " << reset;
  cin >> about_User.email;

  cout << "\n[ . . . ] Checking if the e-mail is valid or it is not";
  usleep(2500);
  cout << ".";
  usleep(2500);
  cout << ".";
  usleep(2500);
  cout << ".\n\n";

  cout << "[ ! ] " << about_User.email << (is_email_valid(about_User.email) ? " \033[1;32mVALID" : " \033[0;31mINVALID");

  cout << reset;


  ///////////////////////////////

  system("clear");
  cout << red << "\n\n\n[ ? ] Enter your password: " << reset;
  cin >> about_User.password;
  system("clear");



  ///////////////////////////////

  cout << yellow << "[ ! ] YOUR REGISTER IS SUCCESFULY PASSED" << reset;







  MyFile << "Name: " << about_User.name << "\nLast name: " << about_User.last_name << "\nAge: " << about_User.age << "\nGender: " << about_User.gender << "\nEmail: " << about_User.email << "\nPassword: " << about_User.password;

  MyFile.close();
}
