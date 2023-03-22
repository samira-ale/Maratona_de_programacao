#include <iostream>
#include <string>

using namespace std;

int main()
{
    string problemDigit, originalValue;

    while(true){

        cin >> problemDigit >> originalValue;

        if(problemDigit == "0" && originalValue == "0") break;

        for (int i = 0; i < originalValue.size(); i++) {
            if(originalValue[i] == problemDigit[0]){
                originalValue.erase(i, 1);
                i--;
            }

        }

        if(originalValue.size() == 0)
            originalValue = "0";

        for (int i = 0; i < originalValue.size(); i++) {
            if(originalValue[i] != '0' || originalValue.size() == 1) break;

            originalValue.erase(i, 1);
            i--;
        }

        cout << originalValue << endl;
    }
    return 0;
}
