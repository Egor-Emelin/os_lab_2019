#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	int length = strlen(str);
    int i, j;
    char temp;

    // Проходим половину строки и меняем символы местами
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

