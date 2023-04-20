// IPS 6-4-23

// Program to count number of occurences of a given word in given text
#include <stdio.h>
#include <string.h>

// Function to count occurences of a word in text
int search(char *text, char *word) {
	static int count =0;
	static int found =1;
	int text_length = strlen(text);;
	int word_length = strlen(word);
	// Looping and finding each occurence and updating counter
	for (int i=0; i < text_length; i++) {
		found = 1;
		if ( text[i] == word[0] && i+word_length < text_length) {
			for (int j=1; j < word_length; j++) {
				if (text[i+j] != word[j]) {
					found = 0;
					break; 
				}
			}
			if (found == 1) {
				i += word_length-1;
				count++;
			}
	    }
    }
    return count;
}

// Function to test search function
int main() {
	// Taking input of word and text
	char text[1000];
	fgets(text,1000,stdin);
	char word[1000];
	scanf("%s", word);
	// Passing them to search function and returning the occurences
	printf("%d", search(text, word));
	return 0;
}
