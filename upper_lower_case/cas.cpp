#include <iostream>
#include <cstring>
using namespace std;

void toupper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }
}

void tolower(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i]; // to store the value of that index in ch
        if (ch >= 'a' && ch <= 'z'){
            continue;
        }
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main()
{
    char word[] = "This_word_is_lower_case";

    tolower(word, strlen(word));
    cout << word;

    return 0;
}