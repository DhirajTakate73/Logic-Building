#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    char filename[30];
    int fd = 0;

    printf("Enter the name of file that you want to create into current directory\n");
    scanf("%s",filename);       // special scanf nahi use kel karan file name madhye space naste

    fd = creat(filename,0777);

    if(fd == -1)
    {
        printf("unable to create %s file\n",filename);
    }
    else
    {
        printf("%s gets created successfully with file descriptor %d\n",filename,fd);
    }

    return 0;
}

// proper code


