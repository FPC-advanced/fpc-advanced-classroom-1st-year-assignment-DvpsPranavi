// Write a C program to compare two strings, character by character.
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    char string1[50], string2[50];
    input_two_strings(string1, string2);
    int result = stringcompare(string1, string2);
    output(string1, string2, result);
    
}