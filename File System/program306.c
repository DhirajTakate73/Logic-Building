#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control
#include<string.h>   // to use strlen function

#define BUFFERSIZE 1024     // macro which wii be handled by preprocessor

int main()
{
    int fdread = 0, fdwrite =0;
    char buffer[BUFFERSIZE] = {'\0'};
    char fnamesrc[30];
    char fnamedest[30];
    int iret = 0;

    printf("enter the name of existing file : \n");
    scanf("%s",fnamesrc);

    printf("enter the name of new file that we want to create : \n");
    scanf("%s",fnamedest);

    fdread = open(fnamesrc,O_RDONLY);

    if(fdread == -1)
    {
        printf("Failure in opening existing file\n");
        return -1;
    }

    fdwrite = creat(fnamedest,0777);

    if(fdwrite == -1)
    {
        printf("Failure in creating new file\n");  
        return -1;
    }

    while((iret = read(fdread,buffer,sizeof(buffer))) != 0)
    {
        write(fdwrite,buffer,iret);
    }

    close(fdread);
    close(fdwrite);

    printf("file copy successful...");

    return 0;
}

// user kadun existing file ch nav gheun tya file cha data navin file tyar karun tyat copy kara.