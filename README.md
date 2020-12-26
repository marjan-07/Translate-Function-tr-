# Translate-Function-tr-
implement a simplistic version of Linux tr (translate)
command. Your program:

 -expects 2 command-line arguments (CLAs), set1 and set2
 -reads characters from stdin, and writes them to stdout,
  replacing characters from set1 by those of set2 (like tr).

 -Note:
  -sets are alphanumeric characters of same length e.g.:
   ./a.out abc x3Q
  -if not 2 CLAs, or if set1 and set2 not same length, or set1
   not alphanumeric, or set2 not alphanumeric, print
     "BAD INPUT" on stdout and exit. (Note: stdout, not stderr!)

 -do NOT implement tr's options or "interpreted sequences", as
  defined in the tr man page (e.g., -d, -s, '\n', [:alnum:])

 -Example:

>cat infile
m fnd
vibux
>gcc F1.c
>./a.out mfvb CaLn <infile
C and
Linux
>
