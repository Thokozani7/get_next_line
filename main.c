//<<<<MAIN>>>
#include <stdio.h>
#include "get_next_line.h"

int        main(int argc, char **argv)
{
    int        fd;
    char    *line;
    int        i;
    int        ret;

    i = 0;
    (void)argc;
    fd = open((argv[1]), O_RDONLY);
    
      while (i < 39)
    {  
          ret = get_next_line(fd, &line);
          printf("|%s|\n", line);
          i++;    
    }
 
    //ft_putendl(ft_strjoin("Hello ", "World!"));
     return (0);
} 