#include "ft_printf.h"

const chat *ft_parse_printf_format(const char *format, printf_info info)
{
        ++format;
        // 구조체 초기화
        info->prec = 0;
        info->width = 0;
        info->alt = 0;
        info->spacd = 0;
        info->left = 0;
        info->showsign = 0;
        
        // flag 파싱
        do
        {
                switch(*format)
                        case ' ':
                                info->spacd = 1;
                                continue;
                        case '#'':
                                info->alt = 1;
                                continue;
                        case '-':
                                info->left = 1;
                                continue;
                        case '+':
                                info->showsign = 1;
                                continue;
                        case '0':
                                info->pad = 0;
                                continue;
                        daflut:
                                break;
                }
                break;
        } while (*++format)
        if (info.left)
                info->pad = ' ';
        // width 파싱
        if (ft_isdigth(*format))
                info.width = ft_atoi(*format);      // ft_atoi 수정하여 사용
        // precision 파싱
        if (*format == '.')
        {
                if (ft_isdigth(*format))
                        info->prec = ft_atoi(*format);
        }
        else
                info->prec = 0;      // "%.?" is treated like "%/0?"

        // typer 체크
        info->spec = (wchar_t) *format++;
        
        return (format);
}



