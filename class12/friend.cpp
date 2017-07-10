#include<iostream>
#include<string>

using namespace std;
class WordList;

class Node {
    private:
        string word;
        Node * next;
    public:
        Node(string s) {
            word = s;
            next = nullptr;
        }
    friend class WordList;
    friend ostream& operator<< (ostream& strm, const WordList& m);
};

class WordList {
    private:
        int size;
        Node * first;
        Node * last;

    public:
        WordList() {
            size=0;
            first=nullptr;
            last=nullptr;
        }

        void addToFront(string s);
        void addToRear(string s);
        void print();
        bool isEmpty() { return (size == 0);}

    friend ostream& operator<< (ostream& strm, const WordList& m);
};

void WordList::addToFront(string s) {
    Node * newNode = new Node(s);
    newNode->next = first;
    first = newNode;
    size++;
    if (size == 1) {
        last = first;
    }
}

void WordList::addToRear(string s) {
    Node * newNode = new Node(s);
    if (isEmpty()) {
        addToFront(s);
    }
    else {
        last->next = newNode;
        last = newNode;
    }
    size++;
}

ostream& operator<< (ostream& strm, const WordList& m) {
    Node * curr = m.first;
    while (curr != nullptr) {
        strm << curr->word << " ";
        curr = curr->next;
    }
    return strm;
}

int main() {
    cout << "Starting test" << endl;

    WordList words;

    words.addToFront("Hello");
    words.addToRear("world");
    words.addToRear("goodbye!");
    words.addToFront("CSC220");
    cout << words << endl;
    return 0;
}
