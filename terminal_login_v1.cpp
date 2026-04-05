#include <iostream>

int main(){

    std:: string title = "Terminal_Login.";
    std:: string version = "v2.0";
    std:: string date = "04/04/2026";
    std:: string credit = "All rights reserved.";
    std:: string facebook = "https://www.facebook.com/gabriel.gajete.50";
    std:: string github = "  https://www.github.com/g1tgab";



    std:: cout << std:: endl << title <<"     ";
    std:: cout << "[Version: " << version << "]"<<std :: endl;
    std:: cout << "Date: " << date <<"    ";
    std:: cout << credit << std :: endl;
    std:: cout<< std:: endl;
    std:: cout << "Facebook: " << facebook << std :: endl ;
    std:: cout << "Github: " << github << std :: endl ;

    std:: cout << "-----------------------------------------" <<std:: endl;

    std:: string username;
    std:: string password;
    std:: string confirmation;
    std:: string confirmed;
    std:: string correct = "Login Successful!";
    std:: string incorrect = "Login Failed!"; 

    //* Username
    std:: cout <<"Username: "; 
    std::getline(std::cin >>std::ws, username) ;
    
    //* Password

    std:: cout << "Password: ";
    std:: cin >> password ;


    std:: cout << "Confirm Password: ";
    std:: getline (std:: cin >> std::ws, password) ;

    if (password == "user") {
        std:: cout << "-----------------------------------------" <<std:: endl;
        std:: string loginsuccesful = "Login Successful!";
        std:: cout << loginsuccesful;

    }
    else if(confirmed == password){
        std:: string loginsuccesful = "Login Succesful!";
        std:: cout << loginsuccesful;

    }
    else { 
        std:: cout << "-----------------------------------------" <<std:: endl;
        std:: string incorrectpassword = "Incorrect Password!";
        std:: cout << incorrectpassword;
    }
     std:: cin >> correct;

    return 0;
}