#include <iostream>
#include <queue>

using namespace std;

void configure_cards_values(queue<int>& cards, int number_of_cards);
void print_discarted_cards(queue<int>& cards);
void print_remaining_card(queue<int>& cards);
void move_first_card_to_end(queue<int>& cards);
int discart_card(queue<int>& cards);

int main() {
    int number_of_cards;

    while (true) {
        cin >> number_of_cards;
        if (number_of_cards == 0) break;

        queue<int> cards;
        
        configure_cards_values(cards, number_of_cards);
        print_discarted_cards(cards);
        print_remaining_card(cards);        
    }

    return 0;
}

void configure_cards_values(queue<int>& cards, int number_of_cards){
    for (int i = 1; i <= number_of_cards; i++) {
        cards.push(i);
    }
}

void print_discarted_cards(queue<int>& cards){
    cout << "Discarded cards:";
    while (cards.size() > 1) {
        int discarded = discart_card(cards);
        
        if (cards.size() != 1) {
            cout << " " << discarded << ",";
        } else {
            cout << " " << discarded << endl;
        }

        move_first_card_to_end(cards);
    }
}

int discart_card(queue<int>& cards){
    int discarded_card = cards.front();
    cards.pop();

    return discarded_card;
}

void move_first_card_to_end(queue<int>& cards){
    int start_queue = cards.front();
    cards.pop();
    cards.push(start_queue);
}

void print_remaining_card(queue<int>& cards){
    cout << "Remaining card: " << cards.front() << endl;
}






