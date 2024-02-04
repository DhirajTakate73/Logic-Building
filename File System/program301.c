// accept file name from user and read whole file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control
#include<string.h>   // to use strlen function

#define BUFFERSIZE 1024     // macro handled by preprocessor

int main()
{
    char filename[30];
    char arr[BUFFERSIZE] = {'\0'};          // mug chi size 1024bytes
    int fd = 0;
    int iret = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",filename);

    fd = open(filename,O_RDWR);

    if(fd == -1)
    {
        printf("unable to open %s file\n",filename);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",filename,fd);

        while((iret = read(fd,arr,sizeof(arr))) != 0)   // joparyant read system call chi value 0 yet nahi toparyant
        {
            printf("%s",arr);       // read kelela data display karnyasathi
        }
        close(fd);
    }

    return 0;
}

// proper code
// copy of program298.c


