#include "ft_printf.h"

// width
// if !width, return (NULL)
char    *adjust_width(prinf_info info)
{
        char *p_w;
        if (info->width > 0)
        {
                p_w = (char *)calloc(info->width, (sizeof)char);
                return (p_w);
        }
        return (NULL);
 }
// percision 0
// if !prec, return (str)
int adjust_prec(printf_info info, char *str)
{
        char *p_p;
        int l;

        l = ft_strlen(str) - info->prec;
        if (ft_strlen(str) < info.prec)
        {
                l = ft_strlen(str) - info->prec;
                p_p = (char *)calloc(info->prec, (sizeof)char);
                ft_memcpy(p_p + l, str, ft_strlen(str));
        }
        else
                ft_memcpy(p_p, str, l);
}
