# Objective

I single repo to keep all my C Programming language notes and exercies from the C Programming Book (K&R) && Beej’s Guide to C Programming

## To Do

-   [ ] Start folders and lay out the book as a project
-   [x] Add folder for notes and documentation
-   [ ] Add lesson plans (Schedule)
-   [ ] Add addtional exercises not in the book
-   [ ] Add complimentary learning resources.

## Compiling, running and debugging

### In the VS Code Terminal:

Go to the "Terminal" menu at the top of VS Code and select "New Terminal." This will open a terminal window at the bottom.
Navigate to the directory where you saved your hello.c file using the cd command (change directory). For example, if your file is in a folder named c_projects on your Desktop, you'd type:

```Bash
cd Desktop/c_projects
```

and press Enter.
Once you're in the correct directory, you can compile your C code using the gcc compiler (which comes standard with macOS's developer tools):

```Bash
gcc hello.c -o hello
```

`gcc` is the command to invoke the GCC compiler.
`hello.c` is the name of your C source code file.
`-o` hello tells the compiler to name the output executable file hello. If you skip `-o hello`, the executable will be named `a.out` by default (which is perfectly fine for now).
After the compilation is successful (you won't see any output if there are no errors), you can run your program by typing:

```Bash
./hello
```

`./` tells the terminal that you want to execute a file in the current directory.
hello is the name of the executable file we created in the previous step.
