
	/* Version 1 */
 // MANIPULATING SOURCE
 #define _CRT_SECURE_NO_WARNINGS
 #define BUFFER_SIZE 80
 #include "manipulating.h"

void manipulating(void) {    //start the function by declaring the function name
	printf("*** Start of Concatenating Strings Demo ***\n");   //print the title
	char    string1[BUFFER_SIZE];   //declares character string1 with the size of 80 that is the buffer size
	char    string2[BUFFER_SIZE];   //declares character string2 with the size of 80 that is the buffer size
	do {   //start the loop till the input is q
		printf("Type the 1st string (q - to quit):\n");   //alert the user to type the first string
		fgets(string1, BUFFER_SIZE, stdin);  //get input from the user of the first string
		string1[strlen(string1) - 1] = '\0';  //removes newline character from the string
		if ((strcmp(string1, "q") != 0)) {   //This checks if the input is q
			printf("Type the 2nd string:\n");   //alert the user to type the second string
			fgets(string2, BUFFER_SIZE, stdin);  //get the input from the user of the second string
			string2[strlen(string2) - 1] = '\0'; //remove the last character
			strcat(string1, string2);   //concatenate the strings thus string1 and string2 
			printf("Concatenated string is \'%s\'\n", string1);  //print the result

		}
	} while (strcmp(string1, "q") != 0);  //Repeat the loop until the input is q
	printf("*** End of Concatenating Strings Demo ***\n\n");  //print the title


	/* Version 2 */
	printf("*** Start of Comparing Strings Demo ***\n");   //prints the title
	char compare1[BUFFER_SIZE];      //declares character compare1 with the size of 80 that is the buffer size
	char compare2[BUFFER_SIZE];	  //declares character compare2 with the size of 80 that is the buffer size
	int result;                  //declares integer variable result to store the result of the comparison
	do {                        //start the loop till the input is q
		printf("Type the 1st string to compare (q - to quit):\n");   //alert the user to type the first string
		fgets(compare1, BUFFER_SIZE, stdin);   //get input from the user of the first string
		compare1[strlen(compare1) - 1] = '\0';  //removes newline character from the string
		if (strcmp(compare1, "q") != 0) {   //This checks if the input is q
			printf("Type the 2nd string to compare:\n");  //alert the user to type the second string
			fgets(compare2, BUFFER_SIZE, stdin);    //get the input from the user of the second string
			compare2[strlen(compare2) - 1] = '\0';  //remove the last character
			result = strcmp(compare1, compare2);  //it compare the strings thus string1 and string2
			if (result < 0)                     //if the result is less than 0
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);    //print the result if the result is less than 0
			else if (result == 0)             //if the result is equal to 0
				printf("\'%s\' string is equal to \'%s\',\n", compare1, compare2);   //print the result if the result is equal to 0
			else                            //if the result is greater than 0
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);     //print the results if the result is greater than 0
		}
	} while (strcmp(compare1, "q") != 0);   //Repeats the loop until the input is q allowing the user to compare strings
	printf("*** End of Comparing Strings Demo ***\n\n");   //print the tile indicating the end of the programu


	return 0; //end of the function


}
	    int main(void)	
		{
		 manipulating();
		 return 0;
	    }



