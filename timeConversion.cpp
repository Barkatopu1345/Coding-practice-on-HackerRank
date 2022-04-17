#include<iostream>
#include<string>

using namespace std;

string timeConversion(string s) {
    int hourse = 12;
    int minute = 00;
    int secound = 00;
    int check = -1;
    check = s.find('P');
    if(check == -1){

        if(s.at(0)=='1'){
        s.replace(0,2,"00");

        }
         s = s.substr(0, s.find('A'));
    }
    else{
        string temp = s.substr(0,2);
        if(temp == "12") hourse += 00;


        else hourse += (stoi(s.substr(0,s.find(':'))));
        s.replace(0,2,to_string(hourse));
        s = s.substr(0, s.find('P'));
    }

    return s;
    
    
}

int main(){
    string str;
    cin>> str;
    cout<<timeConversion(str);
}