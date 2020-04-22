#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    int letters = 0;
    int space = 0;
    int punctuation = 0;

    string text = get_string("Text: "); //prompt the user to input the text
    int characters = strlen(text);
    
    for (int i = 0; i < strlen(text); i++)
{
    if (isalnum(text[i]))
    {
        letters++;  //number of letters
    }
}    
    for (int j = 0; j < strlen(text); j++)
{
    if (isspace(text[j]))
    {
        space++;    //number of spaces
    }
}
    for (int k = 0; k < strlen(text); k++)
{
    if (text[k] == '.' || text[k] == '!' || text[k] == '?')
    {
        punctuation++;  //number of '.' or '!' or '?'
    }
} 
    int word = space + 1;   //number of words
    int sentence = punctuation; //number of sentences

    float L = ((float)letters * 100 / word);
    float S = ((float)sentence * 100 / word);
    
    float grade = 0.0588 * L - 0.296 * S - 15.8;
    
    if (grade < 0)
    {
        printf("Before Grade 1\n");
    }

    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %.0f\n", grade);    //output the grade
    }
}