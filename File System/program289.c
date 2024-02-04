#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    int fd = 0;
    int iret = 0;
    char arr[] = "Angular web development";

    fd = open("marvellous.txt",O_RDWR | O_APPEND);      // O_APPEND - last pasun writing chalu karnyasathi

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iret = write(fd,arr,23);   // Angular web development  = 23 letters
        printf("%d bytes gets successfully written into the file\n",iret);

        close(fd);
    }

    return 0;
}

// append mule last la write hoil
//overwrite hoil logic building chya jagi
// full path == absolute path