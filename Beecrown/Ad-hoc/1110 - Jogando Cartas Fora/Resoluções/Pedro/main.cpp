#include <iostream>
#include <list>

using namespace std; 

void read_cards(list<int>*, int); 
void discard_card(list<int>*, list<int>*);
void swap_top_to_back(list<int>*);
void print_discarded_cards(list<int>*);
void print_remaining_card(list<int>*);
void print_list(list<int>*); 

int main(){
    list<int> cards;
    list<int> discartedCards;
    int numberOfCards = 0;

    while(true){
        cin >> numberOfCards; 

        if(numberOfCards == 0) break;

        read_cards(&cards, numberOfCards);

        while (cards.size() >= 2)
        {
            discard_card(&cards, &discartedCards);
            swap_top_to_back(&cards);
        }

        print_discarded_cards(&discartedCards);
        print_remaining_card(&cards);
    }
    
    return 0; 
}


void read_cards(list<int>* cards, int size){
    for (int i = 0; i < size; i++) cards->push_front(i + 1);
}

void discard_card(list<int>* cards, list<int>* discartedCards){
    discartedCards->push_back(cards->front());
    cards->pop_front();
}

void swap_top_to_back(list<int>* cards){
    int topCard = cards->front();
    cards->pop_front();
    cards->push_back(topCard);
}

void print_discarded_cards(list<int>* discartedCards){
    cout << "Discarded cards: ";
    print_list(discartedCards);
}

void print_remaining_card(list<int>* cards){
    cout << "Remaining card: ";
    print_list(cards);
}

void print_list(list<int>* cards)
{
    for (list<int>::iterator it = cards->begin(); it != cards->end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}