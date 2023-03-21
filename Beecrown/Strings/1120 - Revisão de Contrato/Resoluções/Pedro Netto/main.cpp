#include <iostream>

using namespace std;

int main()
{
    unsigned long int digitWithProblem, originalNumber;
    digitWithProblem = originalNumber = 0;

    while(digitWithProblem != 0 && originalNumber != 0)
    {
        cin >> digitWithProblem >> originalNumber;

        string strOriginalNumber = to_string(originalNumber);

        for (int i = 0; i < strOriginalNumber.size(); ++i) {

            if(strOriginalNumber[i] - '0' != digitWithProblem){
                strOriginalNumber.erase(i, 1);
            }
        }

        cout << strOriginalNumber << endl;
    }

    return 0;
}
