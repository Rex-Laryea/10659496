
#include <iostream>
using namespace std;


int hfc(int x, int y);


int main(){
    cout << "Find the HCF of two number" << endl;

    while (1==1){
        int x, y;
        cout << "Enter the two numbers :" << endl;;
        cin >> x >> y;
        if (!cin.fail()){
            answer = hfc(x, y)
            cout << "The Highest Common Factor of " << x << " & " <<  y << " is: " << answer << "\n\n";
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}


int hfc(int x, int y){
    if (y != 0)
        return hfc(y, x % y);
    else
        return y;
}
