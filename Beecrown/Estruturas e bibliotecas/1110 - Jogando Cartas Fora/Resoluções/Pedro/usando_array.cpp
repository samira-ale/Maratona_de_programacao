#include <iostream> 
using namespace std; 

int main()
{
    int n, cards[50] = {}; 
    int aux = 0; 

    do
    {
        cin >> n; 
        if(n == 0)
        {
            return 0;
        } 

        for (int i = 0; i < n; i++)
        {
            cards[i] = i + 1;
        }
        cout << "Discarded cards: "; 
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                aux = cards[j]; 
                cards[j] = cards[j + 1]; 
                cards[j + 1] = aux; 
            }
            if(i == n - 2)
            {
                cout << cards[i] << endl;
            }
            else
            {
                cout << cards[i] << ", "; 
            }
        }
        cout << "Remaining card: " << cards[n - 1] << endl; 


    }while(true); 

    return 0; 
}
