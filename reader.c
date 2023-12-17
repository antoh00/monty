#include "monty.h"

void command(file)
{
    int lineCount = 0;
    char buffer[1024]; 

    
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        lineCount++;
    }
    return (lineCount);
}