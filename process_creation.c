#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        /* Child process */
        printf("Child: This is the child process. PID: %d, PPID: %d\n", getpid(), getppid());
    } else if (pid > 0) {
        /* Parent process */
        printf("Parent: This is the parent process. PID: %d, child PID: %d\n", getpid(), pid);
    } else {
        printf("Fork failed!\n");
    }
    return 0;
}
