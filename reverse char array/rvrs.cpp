#include <iostream>
#include <cstring>
using namespace std;

void rvrsearr(char word[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        char temp = word[s];
        word[s] = word[e];
        word[e] = temp;

        s++;
        e--;
    }
}
int main()
{
    char word[] = "o n m l K j i h g f e d c b A";
    rvrsearr(word, strlen(word));

    cout << word;
}