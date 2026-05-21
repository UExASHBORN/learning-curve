#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>

int  main(int argc, char** argv){
	const int SIZE = 4096;
	const char* name = "OS" ;
	const char* messege_0 = "Hello";
	const char* messege_1 = "world";
	int fd;
	char* ptr;
	fd = shm_open(name, O_CREAT | O_RDWR, 0666);
	ftruncate( fd , SIZE );
	ptr = (char*) mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	sprintf(ptr, "%s", messege_0);
	ptr += strlen(messege_0);
	sprintf(ptr, "%s", messege_1);
	return 0;
}
