/** IPS 10-4-23
  * Write a C program that accepts the name of a country as input and displays the corresponding capital.
  * Design the program so that it executes repeatedly, until the word End is entered as input. Use array of strings.
  * Input : India Bangladesh End
  * Output : New Delhi Dhaka
  * Database contains the details of the following countries :
  * India
  * Australia
  * Bangladesh
  * Bhutan
  * Canada
  * China
  * Japan **/

// Program to print capitals to given countries (from database)
#include <stdio.h>
#include <string.h>

int main() {
    // Declaring string array of countries and capitals for database
    char countries[7][11] = {"India", "Australia", "Bangladesh", "Bhutan", "Canada", "China", "Japan"};
    char capitals[7][10] = {"New Delhi", "Canberra", "Dhaka", "Thimpu", "Ottawa", "Beijing", "Tokyo"};
    // Initialising output variables
    char output_capitals[7][11];
    char input_country[11];
    int input_country_num=0, country_index=0;
    // Running loop till End is entered by the user
    scanf("%s", input_country);
    while(strcmp(input_country, "End") != 0) {
	// Search the country name in the database and store its respective capital in output variable
	for (; country_index < 7; country_index++) {
	    if (strcmp(input_country,countries[country_index]) == 0 ) {
		break;
	    }
	}
	strcpy(output_capitals[input_country_num++],capitals[country_index]);
	country_index=0;
	scanf("%s", input_country);
    }
    for (int i=0; i < input_country_num; i++) {
	printf("%s\n", output_capitals[i]);
    }
    return 0;
}
