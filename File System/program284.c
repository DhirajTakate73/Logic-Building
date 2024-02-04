#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    int fd = 0;

    fd = open("program283.c",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file is successfully opened with fd : %d\n",fd);

    }

    return 0;
}
// file open hoil because ahe
// full path == absolute path