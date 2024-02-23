#include<iostream>
#include<string>
using namespace std;


int main(){

    char gender[4]={'F','M'};
    char ansgender;
    string name;
    string prename;
    
    
    while(true){
        cout<<"Enter your gender: ";
        cin>>ansgender;
        if(toupper(ansgender) == 'F' || toupper(ansgender) == 'M'){
            break;
        }
    }
    
    cout<<"Enter your name : ";
    getline(cin,name);
    

    return 0;
}
