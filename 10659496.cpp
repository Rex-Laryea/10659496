#include <iostream>
using namespace std;

int main(){
    int mark;
    cout << "Check our Grade\nExit the program with -1" << endl;
    while(true){
        cout << "\nwhat did u score?"<<endl;
        cin >> mark;

        switch(mark){
            case 80 ... 100:
                cout << "You attained grade A"<<endl;
                break;
            case 75 ... 79:
                cout << "You attained grade B+"<<endl;
                break;
            case 70 ... 74:
                cout << "You attained grade B"<<endl;
                break;
            case 65 ... 69:
                cout << "You attained grade C+"<<endl;
                break;
            case 60 ... 64:
                cout << "You attained grade C"<<endl;
                break;
            case 55 ... 59:
                cout << "You attained grade D+"<<endl;
                break;
            case 50 ... 54:
                cout << "You attained grade D"<<endl;
                break;
            case 45 ... 49:
                cout<< "You attained grade E"<<endl;
                break;
            case 0 ... 44:
                cout << "You attained grade F"<<endl;
                break;
            case -1:
                cout << "You Ended The Program"<<endl;
                break;
            default:
                cout << "Enter a valid number"<<endl;
                break;
            }
            if (mark == -1){
                break;
            }
    }


    return 0;
}

