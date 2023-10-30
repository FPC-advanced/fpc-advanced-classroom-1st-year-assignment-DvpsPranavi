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
    return 0;    
}

void input_two_strings(char *string1, char *string2)
{
    printf("Enter the string : \n");
    scanf("%s",string1);
    printf("Enter the string : \n");
    scanf("%s",string2);

}

int stringcompare(char *string1, char *string2)
{
    int a=0;
    for(int i=0;string1[i]!='\0' || string2!='\0';i++)
    {
        if(string1[i]<string2[i])
        {
            return 0;
            a++;
        }
        else if(string1[i]>string2[i])
        {
            return 1;
            a++;
        }
    }
    if(a==0)
    {
        return 2;
    }
}
