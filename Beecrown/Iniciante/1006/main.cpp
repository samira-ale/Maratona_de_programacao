#include <iostream>
#include <iomanip>

using namespace std; 

int main(int argc, const char** argv) {

    const int weightNoteA = 2, weightNoteB = 3, weightNoteC = 5;

    double noteA, noteB, noteC;

    cin >> noteA >> noteB >> noteC;

    cout << "MEDIA = "
         << fixed << setprecision(1)
         << (noteA * weightNoteA + noteB * weightNoteB + noteC * weightNoteC) / (weightNoteA + weightNoteB + weightNoteC)
         << endl;

    return 0;
}