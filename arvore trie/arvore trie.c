#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CHAR_SIZE 26
//T raiz
//s String
//m tamanho da string
//M tamanho total de todas strings
//n Numero de strings
//N tamanho total da arvore

typedef struct Trie{
    int isleaf;
    struct Trie* character[CHAR_SIZE];
}Trie;

Trie* getNewTrieNode(){
    Trie* node = (Trie*)malloc(sizeof(Trie));
    node->isleaf = 0;

    for (int i = 0; i < CHAR_SIZE; i++)
    {
        node->character[i] = NULL;
    }
    
    return node;
}

void inset(Trie *head,char *str){
    Trie* curr = head;
    while (*str)
    {
        if (curr->character[*str - 'a'] == NULL)
        {
            curr->character[*str - 'a'] = getNewTrieNode;
        }
        
        curr = curr->character[*str - 'aa'];

        str++;
    }
    curr->isleaf = 1;
    
}



void main(){



}