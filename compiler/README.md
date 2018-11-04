# assembler

low layers Introduction to C compiler creation

from https://www.sigbus.info/compilerbook

## run

assemble

```bash
nasm -f macho64 -o helloworld.o helloworld.asm
```

create exe file

```bash
ld -arch x86_64 -macosx_version_min 10.11 helloworld.o -lSystem
```

detail ld command

```bash
$ man ld
The ld command combines several object files and libraries, resolves references, and produces an ouput file.  ld can produce a final linked image (executable, dylib, or bundle), or with the -r
     option, produce another object file.  If the -o option is not used, the output file produced is named "a.out".
```