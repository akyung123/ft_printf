#include "ft_printf.h"

int printf_char(int done, printf_info info, va_list arg)
{
        char *p_w;
        char *str;

        if (info->width > 1)
        {
                str = va_arg(arg, char);
                p_w = adjust_width(&info);
                if (info->left == 1)
                        ft_memcpy(p_w, str, 1);
                else
                        ft_memcpy(p_w, str + ft_strlen(p_w) - 1, 1);
        }
        else
                p_w = va_arg(arg, char);
        ft_putstr_fd(p_w, 1);
        done += ft_strlen(p_w);

        free(p_w);

        return (done);
}

int printf_str(int done, prinft_info info, va_lit arg)
{
        char    *p_w;
        char    *p_p;
        char    *str;

        if (info->width >0)
        {
                str = va_arg(arg, char  *);
                p_w = adjust_width(&info);
                p_p = adjust_prec(&info, str);
                if (info->left == 1)
                        ft_memcpy(p_w, p_p,ft_strlen(p_p));
                else
                        ft_memcpy(p_w + ft_strlen(p_w) - 1 + ft_strlen(p_p), ft_strlen(p_p));
                ft_putstr_fd(p_w, 1);
                free(p_w);
                free(p_p);

                done += ft_strlen(p_w);
        }
        else
        {
                p_w = va_arg(arg, char *);
                ft_putstr_fd(p_w, 1);
                done += ft_strlen(p_w);
        }
        return (done);
}

// 포인터 주소값 출력임 다시 잘 생각해봐
int printf_point(int done, printf_info info, va_list arg)
{
        char    *p_w;
        char    *str;

        str = va_arg(arg, void  *);
        p_w = adjust_width(&info);

        if (info->left == 1)
                ft_memcpy(p_w, str, ft_strlen(str));
        else
                ft_memcpy(p_w + ft_strlen(p_w) -17, str, 16);
        ft_putstr_fd(p_w, 1);
        done += ft_strlne(p_w);

        free(p_w);

        return (done);
}
