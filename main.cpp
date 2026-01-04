#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> Diary;

int addNote(){
    string entry;
    cout<<"Start making entry in the next line\n";
    cin.ignore();
    getline(cin,entry);
    Diary.push_back(entry);
    return Diary.size();
}

void display(){
    int n=Diary.size();
    if(n==0){
        cout<<"Diary is Empty.\n";
        return;
    }
    for(int i=0;i<n;i++){
        cout<<"Note "<<i+1<<" : "<<Diary[i]<<"\n";
    }
}

void deleteLastNote(){
    int n=Diary.size();
    if(n==0){
        cout<<"No entry in Diary, Cannot delete.\n";
        return;
    }
    Diary.pop_back();
    cout<<"Last Note deleted. Now left with "<<Diary.size()<<" notes.\n";
}

void deleteAll(){
    Diary.clear();
    return;
}

int main(){
    cout<<"Enter choice:\n1 -  Add new entry\n2 - View existing entries\n3 - Delete the last entry\n0 - Delete all entries\n-1 - exit the program\n";
    while(1){
        

        int n;
        cin>>n;

        switch(n){

            case 1:
            addNote();
            // cout<<"hi 1 ended here\n";
            cout<<"Enter choice: ";
            break;

            case 2:
            // cout<<"debug";
            display();
            cout<<"Enter choice: ";
            break;

            case 3:
            deleteLastNote();
            cout<<"Enter choice: ";
            break;
            
            case 0:
            cout<<"Are you sure you want to delete ALL entries?\n";
            cout<<"Enter Y/y, any other key to cancel.\n";
            char c;
            cin>>c;
            if(c=='Y' or c=='y') deleteAll();
            cout<<"Enter choice: ";
            break;

            case -1:
            return 0;

            default:
            return 0;
        }

    }
    return 0;
}