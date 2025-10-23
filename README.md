# gnl

A custom C function that reads a line from a file descriptor, returning it one line at a time. Made for 42 projects.

## Build

```bash
make
```
## Function prototype

```c
char *get_next_line(int fd);
```

## Example

```c
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
```

