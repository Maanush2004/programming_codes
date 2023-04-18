/** VIT VPROPEL Problem of the Day 16-03-23
 * Code Word Check
 * An agent 'A' comes to a secret place to collect some information, the
 * information will be disclosed to him if he is able to find one of the code words
 * of the group of agents from a given wortd 'w'. All the code words are of length four.
 * The agent 'A' will say the positions of four letters in 'w' that may form the code word.
 * Write a C program to check if the letters ins 'w' in the positions mentioned by 'A' is a code word.
 * For example, if the valid code words are HEAR, BEAR, VEST, MONK and if 'w' is 'RESEARCH'
 * and the position mentiond by the agent is 8, 2, 5 and 6 then it is Valid.
 * Position of the letters in the word 'w' starts from 1.
 * Print Valid if the word that can be formed by the positions mentioned by the agent 'A'
 * is in the list of code words and print Invalid otherwise.
 * 
 * Input Format
 * First line contains the number of code words among the group of agents, n
 * Next 'n' lines contain the code words
 * Next line contains the word, 'w'
 * Next four line contain the position of the letters chosen by the agent 'A'
 * 
 * Output Format 
 * Print either Valid of Invalid **/

// Code Word Check program
#include <stdio.h>
#include <string.h>

int main() {
    int n,temp;
    scanf("%d", &n);
    /** Declaring and Initialising code_words array with 'n' elements,
        having 5 sub-elements (4 for the word and 1 for NULL character) **/
    char code_words[n][5];
    for (int i=0;i<n;i++) {
        scanf("%s", code_words[i]);
    }
    char given_word[20],temp_word[5];
    scanf("%s", given_word);
    // Adding NULL character at the end for temp_word
    temp_word[4] = '\0';
    // Forming word from the characters in given word at the given indices
    for (int i = 0; i < 4; i++) {
        scanf("%d", &temp);
        temp_word[i] = given_word[temp-1];
    }
    // Looping and comparing each word in code_words array with given_word
    for (int i=0;i<n;i++) {
        if (strcmp(temp_word,code_words[i]) == 0) {
            printf("Valid");
            break;
        }
        /** If the loop is in its last iteration and still didn't break,
            then it is surely Invalid **/
        if (i == n - 1) {
            printf("Invalid");
        }
    }
    return 0;
}
