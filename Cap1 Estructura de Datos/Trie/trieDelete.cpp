#include <bits/stdc++.h>

using namespace std;

int cont = 0;
int nodeCount = 0;
struct node {
    char currentCharacter;       
    bool isWord = false;
    int number = 0;             
    struct node *children[27]; 
}*trie; 

void init() {
    trie = new node();
}

void insertWord(string word) {   
    node *currentNode = trie;  
    for (int i = 0; i< word.length(); i++) {
        int character = word[i] - 'a';      
        if(currentNode->children[character] == NULL ) {
            currentNode->children[character] = new node();
        }
        currentNode = currentNode->children[character];
        currentNode->currentCharacter = word[i];
    }
    currentNode->isWord = true;
}

bool searchWord(string word) {   
    node *currentNode =  trie;  
    for (int i = 0; i < word.length(); i++) {
        int character = word[i] - 'a';      
        if(currentNode->children[character] == NULL ) {
           return false;
        }
        currentNode = currentNode->children[character];
    }
    return currentNode->isWord;
}

void isThereWord(string word) {
    if(searchWord(word)) {
        cout<<"si existe "<<word<<" en el trie"<<endl;
    } else {
        cout<<"No Existe "<<word<<" en el trie"<<endl;
    }
}

int depthOfWord(node *currentNode, string word){
    int tempDepth = 0;
    for (int i = 0; i< word.length(); i++) {
            int character = word[i] - 'a';
            if(currentNode->children[character]->isWord && word.length() != i+1) {
                tempDepth++;
            }
            currentNode = currentNode->children[character];
        }
        currentNode->isWord = false;
        return tempDepth;
}

void trieDelete(string word) {
    if(searchWord(word)) {
        node *currentNode = trie;
        int tempDepth = depthOfWord(currentNode, word);
        currentNode = trie;
        for (int i = 0; i< tempDepth; i++) {
            int character = word[i] - 'a';
            currentNode = currentNode -> children[character];
        }
        currentNode = NULL;
        delete currentNode;
        cout << "Se elimino la palabra " << word << " del trie" << endl;
    }
}

int main() {
  init();
  /*
    insertWord("alejandro");
    isThereWord("alejandro"); 
    insertWord("adrian");
    isThereWord("adrian");
    insertWord("andrea");
    isThereWord("andrea");
    trieDelete("alejandro");
    trieDelete("adrian");
    isThereWord("alejandro");
    isThereWord("adrian");
    */
    insertWord("hola");
    insertWord("holas");
    insertWord("holo");
    trieDelete("hola");
    isThereWord("hola");
    isThereWord("holas");
    isThereWord("holo");
    return 0;
}
