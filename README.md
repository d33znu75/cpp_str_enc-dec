### A C++ basic String encoder and decoder for obfuscation purposes

The obfuscated string contains numbers that reference their positions in the base string. These numbers can be used as an array to pass to the deobfuscation function.

output :
```bash
~$ g++ main.cpp && ./a.out
--- Obfuscation ---
String before : string to obfuscate
obfuscated string : 55 57 53 26 41 20 70 57 44 70 44 5 17 59 55 8 2 57 14 
--- Deobfuscation ---
Obfuscated string : 55 57 53 26 41 20 70 57 44 70 44 5 17 59 55 8 2 57 14 
Deobfuscated string : string to obfuscate
```
