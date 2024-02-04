#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    int fd = 0;
    int iret = 0;
    char arr[50] = {'\0'};

    fd = open("marvellous.txt",O_RDWR);      

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iret = read(fd,arr,22);   // Angular web development  = 23 letters
        printf("%d bytes gets successfully read from the file\n",iret);

        printf("%s\n",arr);
        close(fd);
    }

    return 0;
}


//overwrite hoil logic building chya jagi
// full path == absolute path