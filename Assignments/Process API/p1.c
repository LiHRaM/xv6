#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
    printf("hello world (pid:%d)\n", (int) getpid());
    int rc = fork();
    if (rc < 0) { // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) { // child (new process)
        printf("hello, I am child (pid:%d)\n", (int) getpid());
    } else { // parent goes down this path (main)
        printf("hello, I am parent of %d (pid:%d)\n", rc,
               (int) getpid());
    }
    return 0;
}

/**
 * the fork procedure returns < 0 if it fails,
 * 0 for the forked process (child)
 * and the process id of the child process for the parent process
 *
 * OUTPUT
 * hello world (pid:32)
 * hello, I am parent of 33 (pid:32)
 * hello, I am child (pid:33)
 */