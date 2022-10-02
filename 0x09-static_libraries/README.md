## Static Libraries

- compilation without linking
- creating the static library and indexing it
- Using the static library to run programs
- Create static library with bash script

# IMPORTANT -> AVOID DOUBLE INCLUSION!

Use the preprocessor command in your header file e.g main.h:
```c
#ifndef MAIN_H
#define MAIN_H

....

#endif
```

