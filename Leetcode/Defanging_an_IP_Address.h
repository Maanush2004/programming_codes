/** Leetcode 1108. Defanging an IP Address
  * Difficulty : Easy
  * https://leetcode.com/problems/defanging-an-ip-address **/

// Function to defang an IP Address
char* defangIPaddr(char* address) {
    int ip_len = strlen(address);
    // Counting the number of periods
    int period_count = 0;
    for (int i = 0; i < ip_len; i++) {
        if (address[i] == '.') {
            period_count++;
        }
    }
    /** Length of defanged IP Address would be ip_len+2*period_count as for each period set of
      * '[' and ']' are added and + 1 is for NULL character **/
    char* defanged = (char*)malloc((ip_len + 1 + 2 * period_count) * sizeof(char));
    int j = 0;
    // Adding bracked in defanged variable accordingly
    for (int i = 0; i < ip_len; i++, j++) {
        if (address[i] == '.') {
            defanged[j] = '[';
            defanged[j + 1] = '.';
            defanged[j + 2] = ']';
            j += 2;
        } else {
            defanged[j] = address[i];
        }
    }
    defanged[j] = '\0'; //Adding NULL character
    return defanged;
}
