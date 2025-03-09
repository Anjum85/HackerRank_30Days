#include<iostream>
#include<map>

using namespace std;

int main(){

    string name;
    int N;

    cin >> N;
    map<string, int>phone_book;
    for(int i = 0; i < N; i++){
       cin >> name;
       if(!phone_book[name]){
        cin >> phone_book[name];
       }
    }

    while(cin >> name){
        if(phone_book[name]){
            cout << name << "=" << phone_book[name] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
}