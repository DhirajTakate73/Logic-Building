#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    int fd = 0;

    fd = creat("marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("file is successfully created with fd : %d\n",fd);
    }

    return 0;
}


// marvellous.txt file tyar keli
// full path == absolute path