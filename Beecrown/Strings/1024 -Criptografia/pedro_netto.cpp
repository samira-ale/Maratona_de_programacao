#include <iostream>
#include <string>

using namespace std;

string get_encripted_text(string);
string first_pass(string);
string second_pass(string);
string third_pass(string);
bool is_upper_or_lower_alpha(char); 

int main(){

    int number_of_cases = 0; 
    string text = ""; 

    cin >> number_of_cases; 
    
    for (int i = 0; i < number_of_cases; i++)
    {
        cin >> text;

        cout << get_encripted_text(text) << endl; 
    }
    

    return 0;
}

string get_encripted_text(string text){
    string first_pass_value = first_pass(text);
    string second_pass_value = second_pass(first_pass_value);
    return third_pass(second_pass_value);
}

string first_pass(string text){

    string out_value = ""; 

    for(char character : text)
    {
        char encripted_value = is_upper_or_lower_alpha(character) ? (character + 3) : character;

        out_value.append(to_string(encripted_value));
    }

    return out_value; 
}

bool is_upper_or_lower_alpha(char character){
    return (character >= 'a' && character <= 'z') ||
           (character >= 'A' && character <= 'Z');
}

string second_pass(string text){
    text.reserve();
    return text;
}

string third_pass(string text){
    string out_value = "";
   
    for (int i = 0; i < text.size() / 2; i++)
    {
        out_value.append(to_string(text[i] - 1));
    }

    return out_value;
}
