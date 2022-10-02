## Static Libraries

- compilation without linking
- creating the static library and indexing it
- Using the static library to run programs
- Create static library with bash script

# IMPORTANT -> AVOID DOUBLE INCLUSION!

Use the preprocessor command:
```c
#ifndef HEADERFILENAME_H
#define HEADERFILENAME_H

....

#endif
```

