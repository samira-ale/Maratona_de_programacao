#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string get_encripted_text(const string&);
string first_pass(const string&);
string second_pass(string);
string third_pass(string);
bool is_upper_or_lower_alpha(char);

int main(){

    int number_of_cases = 0;
    string text;

    cin >> number_of_cases;
    cin.ignore();

    for (int i = 0; i < number_of_cases; i++)
    {

        getline(cin, text);
        cout << get_encripted_text(text) << endl;
    }


    return 0;
}

string get_encripted_text(const string& text){
    string first_pass_value = first_pass(text);
    string second_pass_value = second_pass(first_pass_value);
    return third_pass(second_pass_value);
}

string first_pass(const string& text){

    string out_value;

    for(char character : text) out_value += is_upper_or_lower_alpha(character) ? (char)(character + 3) : (char)character;

    return out_value;
}

bool is_upper_or_lower_alpha(char character){
    return (character >= 'a' && character <= 'z') ||
           (character >= 'A' && character <= 'Z');
}

string second_pass(string text){
    reverse(text.begin(), text.end()); 
    return text;
}

string third_pass(string text){
    string out_value = "";

    for (int i = 0; i < text.size(); i++) out_value += i >= text.size() / 2 ? (char)(text[i] - 1) : text[i];
    
    return out_value;
}

