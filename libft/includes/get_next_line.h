#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define MAX_FD 12288

# include "sys/types.h"
# include "sys/uio.h"
# include "unistd.h"
# include "stdlib.h"
# include "libft.h"

int get_next_line(const int fd, char **line);

#endif
