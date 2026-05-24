# Inter-Process Communication (IPC) using Anonymous Pipes

This repository contains a fundamental demonstration of Linux process management and Inter-Process Communication (IPC) using anonymous pipes (`pipe`) and process cloning (`fork`) in C.

##  How the Code Works

The program establishes a unidirectional data channel between a parent process and its dynamically spawned child process.

┌──────────────────────────────────────┐
│            Parent Process            │
│  - Closes READ_END                   │
│  - Writes "Greetings" to WRITE_END   │
└──────────────────┬───────────────────┘
│
▼ [Anonymous Pipe Buffer]
│
┌──────────────────┴───────────────────┐
│             Child Process            │
│  - Closes WRITE_END                  │
│  - Reads string from READ_END        │
│  - Prints message to stdout          │
└──────────────────────────────────────┘

### 1. Channel Initialization (`pipe`)
An anonymous data array descriptor `fd[2]` is allocated by the system kernel.
* `fd[0]` represents the **READ_END** (Data Input).
* `fd[1]` represents the **WRITE_END** (Data Output).

### 2. Process Cloning (`fork`)
The `fork()` system call splits execution into two concurrent processes:
* **Parent Process:** Receives a return value greater than 0 (`pid > 0`), which represents the Process ID of the newly created child.
* **Child Process:** Receives a return value of `0` (`pid == 0`).

### 3. Data Streaming Execution
* **The Parent execution path** closes its unused read descriptor, streams the character sequence `"Greetings"` (including its null terminator `\0`) into the pipe channel via `write()`, and cleans up by closing the write descriptor.
* **The Child execution path** isolates its input channel by closing its unused write descriptor, blocks until bytes are ready using `read()`, outputs the resulting buffer directly to the standard output (`stdout`), and safely terminates.

---

##  How to Compile and Run

Open your Linux terminal inside your directory and execute the following commands:

### 1. Compile the Source Code
```bash
gcc pipedemo.c -o pipedemo
