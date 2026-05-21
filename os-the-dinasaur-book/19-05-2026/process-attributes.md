# Deep-Dive: Linux Process Attributes & C Data Abstraction

This guide explains the fundamental principles of **Linux Process Identifiers** and details why typing C system calls into a terminal shell causes errors.

---

##  1. The Linux Process "Identity Card"

Every application executing on a Linux system runs inside a controlled tracking wrapper managed by the kernel called a **Process**. To properly schedule, manage, and secure these processes, the operating system gives each one an internal identity card containing tracking integers:


┌───────────────────────────────────────────────────┐
│             LINUX PROCESS IDENTITY CARD           │
├───────────────────────────────────────────────────┤
│  PROCESS NAME: identity                           │
│                                                   │
│  [PID]  Process ID:             54321             │
│         (My unique system tracking number)        │
│                                                   │
│  [PPID] Parent Process ID:      10987             │
│         (The ID of the shell that launched me)    │
│                                                   │
│  [GID]  Group ID:               1000              │
│         (My user access security group)           │
└───────────────────────────────────────────────────┘


### Key Core Concept Definitions:

1. **PID (Process Identifier)**
   * A unique positive integer assigned by the kernel to identify a specific executing program instance. No two active programs can share the exact same PID simultaneously.

2. **PPID (Parent Process Identifier)**
   * The PID of the process responsible for launching this application. Programs don't run out of nowhere; they are spawned by other programs. 
   * *Example:* When you type `./pout` inside your terminal window, your **Zsh Shell** is the Parent process, and `./pout` is the Child process. The `pout` binary's PPID will match your terminal shell's PID.

3. **GID (Group Identifier)**
   * An integer matching the user security group ownership currently assigned to that running process. This value controls security authorization, defining what system hardware or storage directories the program has permissions to interact with.

---

## 💻 2. Why Typing C Functions in the Terminal Fails

When you typed commands like `getppid()` or `typedef pid()` into your Zsh prompt, your terminal responded with a `function>` line.

### What happened under the hood:
* Your terminal prompt is a **Command-Line Interpreter** (like Zsh or Bash). It is designed to run external compiled programs or shell scripts—it does **not** interpret C programming language syntax natively.
* In shell scripting syntax, typing a word followed by open and closed parentheses—such as `getppid()`—tells the shell: *"I want to define a custom, multiline shell function named getppid."*
* Because you pressed Enter without writing the body of the function, Zsh assumed you were creating a long script and changed its prompt input to `function>` to wait for you to write the inner code. (You can cancel out of this state at any time by pressing `Ctrl + C`).

---

##  3. System Data Abstraction (`pid_t` vs `int`)

Your instructor introduced expressions such as `pid_t` and `gid_t`. These are **System Data Type Abstractions**.

In standard programming, you might hold an identification number in a normal `int` (integer) variable. However, different hardware architectures handle integers differently (some computer systems use 16-bit integers, others use 32-bit or 64-bit). 

To prevent tracking errors when compiling programs across different systems, POSIX standards use data type aliases using C’s `typedef` keyword:
* **`pid_t`**: The system-abstracted data type designed specifically for storing Process IDs.
* **`gid_t`**: The system-abstracted data type designed specifically for storing Group IDs.

When your code is compiled on any computer, the compiler maps `pid_t` to the exact integer scale required by that system's specific processor architecture automatically.

---

##  4. Code Implementation: `identify.c`

To see these system concepts in action, you cannot type them into the terminal line. You must write a C source file, include the proper Linux system headers, compile it, and run the binary execution file.

Below is the complete C program to read and print your process identity attributes:

```c
#include <stdio.h>
#include <unistd.h>    /* Required for getpid(), getppid(), and getgid() */
#include <sys/types.h> /* Required for the system abstractions pid_t and gid_t */

int main() {
    /* 1. Declare variables utilizing system-level abstraction types */
    pid_t my_pid;
    pid_t my_parent_pid;
    gid_t my_group_id;

    /* 2. Execute system calls to pull values from the OS kernel */
    my_pid = getpid();
    my_parent_pid = getppid();
    my_group_id = getgid();

    /* 3. Output the identity values to the user */
    printf("==================================================\n");
    printf(" LINUX PROCESS METADATA IDENTIFICATION            \n");
    printf("==================================================\n");
    printf(" Current Process ID (PID):          %d\n", my_pid);
    printf(" Parent Process ID (PPID) [Shell]:  %d\n", my_parent_pid);
    printf(" User Group Security ID (GID):      %d\n", my_group_id);
    printf("==================================================\n");

    return 0;
}


## How to compile and Execute:

# 1. Compile the identity program
gcc -std=c89 identify.c -o identify

# 2. Run the executable binary
./identify
