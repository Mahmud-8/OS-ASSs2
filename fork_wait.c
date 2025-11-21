#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child: sleeping for 1 second...\n");
        sleep(1);
        printf("Child: exiting.\n");
    } else if (pid > 0) {
        printf("Parent: waiting for child %d to finish...\n", pid);
        int status;
        waitpid(pid, &status, 0);
        printf("Parent: child finished with status %d.\n", status);
    } else {
        perror("fork");
    }
    return 0;
}
