#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    unlink("marvellous.txt");
    printf("file gets successfully deleted...");

    return 0;
}


//overwrite hoil logic building chya jagi
// full path == absolute path