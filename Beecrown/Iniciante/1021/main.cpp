#include <iostream>

using namespace std; 

int getPossibleIntegerDivisions(double* money, double noteValue){

    int maxDivisions = (int)(*money / noteValue);

    *money = *money - (maxDivisions * noteValue); 

    return maxDivisions; 
}

int main(){

    double money;
    
    cin >> money; 

    cout << "NOTAS:\n"
         << getPossibleIntegerDivisions(&money, 100) << " nota(s) de R$ 100.00\n"
         << getPossibleIntegerDivisions(&money, 50) << " nota(s) de R$ 50.00\n"
         << getPossibleIntegerDivisions(&money, 20) << " nota(s) de R$ 25.00\n"
         << getPossibleIntegerDivisions(&money, 10) << " nota(s) de R$ 10.00\n"
         << getPossibleIntegerDivisions(&money, 5) << " nota(s) de R$ 5.00\n"
         << getPossibleIntegerDivisions(&money, 2) << " nota(s) de R$ 2.00\n"
         << "MOEDAS:\n"
         << getPossibleIntegerDivisions(&money, 1.00) << " moeda(s) de R$ 1.00\n"
         << getPossibleIntegerDivisions(&money, 0.50) << " moeda(s) de R$ 0.50\n"
         << getPossibleIntegerDivisions(&money, 0.25) << " moeda(s) de R$ 0.25\n"
         << getPossibleIntegerDivisions(&money, 0.10) << " moeda(s) de R$ 0.10\n"
         << getPossibleIntegerDivisions(&money, 0.05) << " moeda(s) de R$ 0.05\n"
         << getPossibleIntegerDivisions(&money, 0.01) << " moeda(s) de R$ 0.01\n";

    return 0;
}

