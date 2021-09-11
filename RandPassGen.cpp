#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

void PASSINTRO(){
cout << "------------------------------------------------------------\n\n";
cout << " RANDOM PASSWORD GENERATOR\n\n";
cout << "----------------------------------------------------------V1.1\n";
cout << "Version 2 coming soon!!!\n\n";
}

int main(){
system("COLOR A");
srand(time(0));
PASSINTRO();
string optionSelect;
cout << "\n[1] Generate Random Password.\n";
cout << "[2] Exit.\n\n";
cout << "Select an option: ";
cin >> optionSelect;
if (optionSelect == "1"){
    //Nothing;
}
else if (optionSelect == "2"){
    return 0;
}
else {
    return 0;
}
char NumLetSym[] = "zxcvbnmqpwoeirutyalskdjfhgQWERTYUIOPASDFGHJKLMNBVCZ1234567890:/.,()[]';?>|<!@#$%^&*";
int conv = sizeof(NumLetSym);
cout << "\nWhat do you want to generate a password for? \n\n"
<< "Hint: It could be Facebook, Google, name it and we would do just that \n"
<< "for you. \n\n";
string reason;
cout << "Reason: ";
cin >> reason;
cout << "\nEnter the length of password you want to generate: ";
int n;
cin >>n;
int load;
for (load=0; load <= 100; load++){
system("cls");
PASSINTRO();
cout << "Generating Password......." << load << "%";
cout << "\n\n";
}

int i;
ofstream RandomPass(reason + ".html");
for(i = 0; i < n; i++){
    RandomPass << NumLetSym[rand() % conv];
}
RandomPass.close();
string Reader;
ifstream RandomPasser(reason + ".html");
while (getline (RandomPasser, Reader)) {
cout << "===================================================\n";
cout << " " << reason << " generated password: ";
cout << Reader;
cout << "\n===================================================\n\n";
}
cout << "Generated password has been saved in " << reason << ".html on your desktop.\n";
cout << "Note: You are to open it with any text viewer you have available.\n\n";
RandomPasser.close();
cout << "Do you want to re-generate another Password?[Y/N]: ";
string yesNo;
cin >> yesNo;
if (yesNo == "Y"){
    system("CLS");
    cout << "\n";
    main();
}
else if (yesNo == "N"){
    return 0;
}
else if (yesNo == "y"){
    system("CLS");
    cout << "\n";
    main();
}
else if (yesNo == "n"){
    return 0;
}
else {
    return 0;
}

return 0;
}
