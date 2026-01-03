#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> Diary;

int addNote(){
    string entry;
    cout<<"Start making entry in the next line";
    getline(cin,entry);
    Diary.push_back(entry);
    return Diary.size();
}

int main(){
    addNote();
    return 0;
}