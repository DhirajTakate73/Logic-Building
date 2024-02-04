#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control
#include<string.h>   // to use strlen function
int main()
{
    char filename[30];
    char arr[100] = {'\0'};
    char brr[100] = {'\0'};
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

        iret = read(fd,arr,10);

        printf("%d bytes gets successfully read from the file\n",iret);

        printf("data from file is : %s\n",arr);

        iret = read(fd,brr,12);

        printf("%d bytes gets successfully read from the file\n",iret);

        printf("data from file is : %s\n",brr);

        close(fd);
    }

    return 0;
}

// proper code


