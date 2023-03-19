#include <iostream>
#include <iomanip>

using namespace std; 

int main(int argc, const char** argv) {

    const double weightNoteA = 3.5; 
    const double weightNoteB = 7.5;

    double noteA = 0, noteB = 0;

    cin >> noteA >> noteB; 

    cout << "MEDIA = " 
         << fixed << setprecision(5) 
         << (noteA * weightNoteA + noteB * weightNoteB) / (weightNoteA + weightNoteB) 
         << endl; 

    return 0;
}