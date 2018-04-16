1. XV6 provides (and uses) _spinlocks_ to ensure mutual exclusion. Find the code that implements spinlocks.
    1. Explain the elements defined in the `spinlock` data structure.
    1. The implementation both disables interrupts and uses an atomic hardware instruction... why are both necessary?
    1. Explain what happens if a spinlock is acquired twice (without an intervening release)
1. Find the C function XV6 defines to execute the `xchg` instruction
    1. Why is it implemented as a C function?
    1. Find documentation for how the `xchg` instruction works on x86 architecture (_hint:_ look through Intel documentation or Google it.)
1. Identify all the data structures XV6 protects with spinlocks, i.e. find all the places an spinlock is acquired (_hint:_ the `grep` shell command is very useful)
    1. For three (3) of these, explain why they need to be protected by spinlocks; what would happen if they were vulnerable to race conditions?
    1. _(optional)_ Try to remove the spinlock protection and see if you can trigger a race condition.
1. In the XV6 implementation of spinlocks, both an atomic hardware instruction is used in addition to disabling the interrupts. Why? And why does it work?
1. Find the function `allocproc` in the `proc.c` file
    1. Explain what the function does (and how)
    1. Explain how/why the function uses a `goto` instruction
    1. Re-write the function to avoid the use of `goto`
    1. Discuss if all uses of `goto` are bad
1. Find the function `exec` in the `exec.c` file
    1. Explain what the function does (and how)
    1. Explain how/why the function uses a `goto` instruction
    1. Re-write the function to avoid the use of `goto`... or at least discuss _how_ such a rewrite could be made.
    1. Discuss if all uses of `goto` are bad
1. _(optional)_ In the file `sleep1.p` a _promela_ model is given for the way XV6 handles acquire and release etc. This model can be _model-checked_ using the _spin_ model-checker and thus verify that it is free of deadlocks. Look at the contents of this file and discuss it and see if you can understand what the model does and how it works. This exercise is optional and you are **not** expected to know this for the exam.