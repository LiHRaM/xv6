# Exercises for Processes and Threads

1. Find the states where the process states are defined

    `proc.h` and `proc.c`.
    1. What are the possible states? Explain their meaning.

        `enum procstate { UNUSED, EMBRYO, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };`
        
        - *Unused* - A process is waiting to be initialized.
        - *Embryo* - A process has been initialized, but is not ready to run.
        - *Sleeping* - A process is waiting on a system call. (I/O operations, etc.)
        - *Runnable* - A process is ready to run.
        - *Running* - A process is currently in control of the processor.
        - *Zombie* A process has finished, but is waiting on a parent process to clean it up.
        
    1. Discuss why these states are needed. Would you prefer another amount of states?
    1. Find all the places in the code where a state change may occur.
    1. Based on the previous question, draw the state transition diagram.
1. Find the code (data structure) that implements the process control block in XV6 (hint: it might not be called a process control block in XV6).

    1. Explain each data item in the PCB and why it is needed/useful in the PCB. 

1. Find the code that switches to another process (and switches contexts)

    1. Discuss and explain, at a high-level, how the context and process switching works.
    1. Explain the (overall) memory layout for XV6 

1. Find the code for the scheduler of XV6.

    1. Is the scheduler preemptive or cooperative? Is that a good or bad design decision?
    1. Explain how the scheduler works, in particular, how does XV6 choose the next process to run?
    1. Discuss the scheduling policy: what are the advantages and disadvantages, is it a good choice for a desktop OS? What does "good choice" mean?
    1. Discuss how to implement (or implement!) a different scheduler, e.g., a fixed priority scheduler that always picks the process with the highest priority. 

1. Find the code implementing the shell

    1. Discuss how the shell works, e.g., make a flow diagram for a single shell command; how does one add "commands" to the shell?
    1. Find the code the implements directy change, i.e., the `cd` shell command; why does it have to be built directly into the shell?
    1. Discuss how scripting could be added to the shell
    1. Discuss if the shell is part of the operating system. Should it be? 

