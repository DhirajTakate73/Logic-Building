#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    int fd = 0;
    int iret = 0;
    char arr[] = "pre-placement activity";

    fd = open("marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iret = write(fd,arr,22);    // pre-placement activity = 22 letters
        printf("%d bytes gets successfully written into the file\n",iret);

        close(fd); 
    }

    return 0;
}

// aadhi file madhye logic building hot tyavar pre-placement activity overerite hoil
//overwrite hoil logic building chya jagi
// full path == absolute path