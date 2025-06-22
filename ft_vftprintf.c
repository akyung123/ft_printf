#include <unistd.h>
#include <stdarg.h>
#include <ft_printf.h>

int ft_vfprintf(const char *format, va_list arg)
{
        printf_info info;
        // Loop untill all format string are processed
        while (*format)
        {
                if (*format == '%')
                {
                        format++;                     
                        format = ft_parse_printf_format(format, &info);
                        // format에 대한 인자처리

