#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[100];
    int age;
    fstream file;
    
    file.open("example.txt",ios::app);
    if(!file)
    {
        cout<<"Error in creating file !"<<endl;
        return 0;
    }
    
    cout<<"\nFile created successfully ! "<<endl;
    
    cout<<"Enter name: ";
    cin.getline(name,100);
    
    cout<<"Enter age: ";
    cin>>age;
    
    file<<"Name: "<<name<<"\n"<<"Age: "<<age<<endl;
    file.close();
    
    cout<<"\nFile saved and closed successfully ! "<<endl;
    
    file.open("example.txt",ios::in);
    if(!file)
    {
        cout<<"Error in opening file ! ";
        return 0;
    }
    
    file>>name;
    file>>age;
    
    cout<<"Name: "<<name<<"\n"<<"Age: "<<age<<endl;
    return 0;
}
