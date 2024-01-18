
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar()
{
    int randomInteger = random();
    int randomValue = randomInteger % 26;
        // For Debugging purposes
    // printf("Random Value: %d\n", randomValue);
    char randomCharacter = 'A' + randomValue;
    return randomCharacter;
}

// int main(int argc, char** argv)
// {
//     char randomCharacter = randchar();
//     printf("%d\n", randomCharacter);
//     return 0;
// }