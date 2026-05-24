#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#define BUFFER_SIZE 25
#define READ_END 0
#define WRITE_END 1
int main(int argc, char** argv){
	char write_message[BUFFER_SIZE] = "Greetings";
	char read_message[BUFFER_SIZE];
	int fd[2];
	pid_t pid;
	if(pipe(fd) == -1){
		fprintf(stderr, "Pipe failed");
		return 1;
	}
	pid = fork();
	if(pid<0){
		fprintf(stderr, "Fork failed");
		return 1;
	}
	if(pid>0){
		close(fd[READ_END]);
		write(fd[WRITE_END], write_message, strlen(write_message) + 1);
		close(fd[WRITE_END]);
	}else{
		close(fd[WRITE_END]);
		read(fd[READ_END], read_message, BUFFER_SIZE);
		printf("%s\n", read_message);
		close(fd[READ_END]);
	}
	return 0;
}
