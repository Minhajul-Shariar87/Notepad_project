#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void createnote(){
string line,d;
ofstream file;
file.open("note.txt",ios::out|ios::app);
cout<<"Create Something: "<<endl;
getline(cin>>ws,line);
file<<line<<endl;
file.close();

}

void shownote(){
string d;
ifstream file("note.txt");
string ifile;
while(getline(file,ifile)){
    cout<<ifile<<endl;
}
file.close();


}
void deletenote(){
string d;
ofstream file("note.txt");

file<<" "<<endl;
file.close();
cout<<"Delete Successfully"<<endl;
}
void nexit(){
string ds;
cout<<"Do you want to exit: ";
cin>>ds;
if(ds=="Yes"||ds=="yes"){
    exit(0) ;
}



}

int main(){
int s;
start:
cout<<"-----------------------------------------------------------------"<<endl;
cout<<"For Creating a note click \n\n 1) Create a note\n 2) Show my note \n 3) Delete a note \n 4) Exit"<<endl;
cout<<"Answer is: ";
cin>>s;
cout<<"------------------------------------------------------------------"<<endl;
switch(s){
case 1:
    createnote();
    system("cls");
    goto start;
    break;
case 2:
    shownote();
    system("pause");
    system("cls");
    goto start;
    break;
case 3:
    deletenote();
    system("cls");
    goto start;
    break;

case 4:
    nexit();
    goto start;
    break;
default:
    cout<<"Error, Read the description carefully"<<endl;
    main();

}



}
