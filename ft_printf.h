#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// libft 필요 함수
// atoi, strjoin, calloc, memcpy, putstr, bezero

// (null) (nill)?!

typedef struct printf_info
{
	int	perc;
        int	width;
        char    spec;
        unsigned int alt:1;     // # flag
        unsigned int spacd:1;   // ' ' flag
        unsigned int left:1;    // - flag
        unsigned int showsign:1;    // + flag
        unsigned int pad:1;     // 0  fg
	unsigned int dot:1;
        // add if needed
}       t_info;

int	ft_printf(const char *format, ...);
int	ft_vfprintf(const char *format, va_list arg);
int	ft_handle(va_list arg, t_info *info);
int	ft_printf_char(char spce, t_info *info);
int	ft_printf_string(char *str, t_info *info);
int	ft_pritnf_width(unsigned int width, int length, int pad);
const char *ft_parse_printf_format(const char *format, t_info *info);


int	ft_atoi(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
int	ft_isdigit(int c);

#endif