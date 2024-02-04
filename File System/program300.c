// accept file name from user and display data kiti kadhla jatoy 1 round madhye 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control
#include<string.h>   // to use strlen function

int main()
{
    char filename[30];
    char arr[100] = {'\0'};
    int fd = 0;
    int iret = 0, isize = 0;

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
            printf("%d bytes gets read from the file\n",iret);

            isize = isize + iret;

        }
        printf("File contains %d bytes in it\n",isize);

        close(fd);

    }

    return 0;
}

// proper code


