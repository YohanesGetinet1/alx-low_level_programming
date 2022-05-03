#include "main.h"

/**
* read_textFile -Reads a text file and prints in POSIX stdout.
* @filename: file 2 read.
* @letters: Number of letter it should read and print.
* Return: Actual number of letter it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int fdest, size;
char *buffer;
buffer = malloc(sizeod(char)* letters);

/*Check content file*/

if (!filename)
return(0);

/*Check the value of buffer*/

if(!buffer)
return (0);

/*open file*/

fdes = open(filename, O_RODONLY);

/*Read file*/

size = write (STDOUT_FILENO, buffer, read(fdest, buffer, letters));

if(fdest == -1 || size == -1)
return (0);

close(fdest);

free(buffer);

return (size);
}

