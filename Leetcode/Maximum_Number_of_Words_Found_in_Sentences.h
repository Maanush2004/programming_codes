/** Leetcode 2114. Maximum Number of Words Found in Sentences
  * Difficulty : Easy
  * https://leetcode.com/problems/maximum-number-of-words-found-in-sentences **/

// Function to find maximum number of words in given array of sentences
int mostWordsFound(char ** sentences, int sentencesSize){
    int max=0;
    int words;
    // Looping through each sentence and couting spaces
    for (int i=0; i < sentencesSize; i++) {
        // Number of words = Number of spaces in that sentence + 1
        words=1;
        for (int j=0; sentences[i][j] != NULL; j++) {
            if (sentences[i][j]==' ') {
                words++;
            }
        }
        if (words > max) {
            max = words;
        }
    }
    return max;
}
