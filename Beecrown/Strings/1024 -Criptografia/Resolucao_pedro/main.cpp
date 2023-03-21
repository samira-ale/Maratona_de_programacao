#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void encripted_text(string&);
void first_pass(string&);
void third_pass(string&);
bool is_upper_or_lower_alpha(char);

int main(){
    int number_of_cases = 0;
    string text;

    cin >> number_of_cases;
    cin.ignore();

    for (int i = 0; i < number_of_cases; i++)
    {
        getline(cin, text);

        encripted_text(text);

        cout << text << endl;
    }

    return 0;
}

void encripted_text(string& text){
    first_pass(text);
    second_pass(text);
    third_pass(text);
}

void first_pass(string& text){
    for(char& character : text) character += is_upper_or_lower_alpha(character) ?  3 : 0;
}

string& second_pass(string& text){
    reverse(text.begin(), text.end());

    return text;
}

int* third_pass(){

    int* p = (int*)malloc(40);

    *p = 1;

    return p;
}

bool is_upper_or_lower_alpha(char character){

    int *vetor = third_pass();

    cout << vetor[0];

    for (int i = 0; i < 10; ++i) {
        *(vetor + i) = i;
    }

}
