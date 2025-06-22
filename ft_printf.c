#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
        va_list arg;
        int done;

        va_start(arg, format);
        done = ft_vfprintf(format, arg);
        
        va_end;
        return done;
}
