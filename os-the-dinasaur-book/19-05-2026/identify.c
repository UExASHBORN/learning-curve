#include <stdio.h>
#include <unistd.h>    // This header is required for getpid(), getppid(), and getgid()
#include <sys/types.h> // This header defines the pid_t and gid_t data types

int main() {
    // 1. Declaring variables using the system data types your instructor mentioned
    pid_t my_pid;
    pid_t my_parent_pid;
    gid_t my_group_id;

    // 2. Calling the system functions to grab the values
    my_pid = getpid();
    my_parent_pid = getppid();
    my_group_id = getgid();

    // 3. Printing them out
    printf("====================================\n");
    printf("My Process ID (PID):         %d\n", my_pid);
    printf("My Parent's Process ID (PPID): %d\n", my_parent_pid);
    printf("My Group ID (GID):           %d\n", my_group_id);
    printf("====================================\n");

    return 0;
}
