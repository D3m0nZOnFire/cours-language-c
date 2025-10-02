# How to compile (to exe)
> gcc `filename.c` -o `filename`
- `-o` to specify the output file name 
  - if not specified, name is `a.exe` and it overwrites any file that has the same name

# How to generate assembler
> gcc -S -O2 `filename.c` -o `filename.s`
- `-S` to generate the assembler
- `-O2` optimise the code

# How to launch it
> `.\filename`
