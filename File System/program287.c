#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    int fd = 0;
    int iret = 0;
    char arr[] = "logic building with industrial project development";

    fd = open("marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iret = write(fd,arr,14);
        printf("%d bytes gets successfully written into the file\n",iret);

        close(fd);
    }

    return 0;
}


// marvellous.txt open karun tyat logic building write kel programmatically
// full path == absolute path