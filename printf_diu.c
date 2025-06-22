#include "ft_printf.h"

// precision이 0인 경우, 제외하고 그대로 출력
// width or prec < str의 길이라면 
// prec의 값과 상관없이 숫자 그대로 출력
// 길면 0 채워서 출력
// width도 동일함
// prec, 0 flag 모두 존재 시, 오류
// 실제로는 문자가 생성x, null 반환
// -, +, ' ' , 0  flag 처리해야함
int printf_int(int done, printf_info info, va_list arg)
{
        char    *p_w;
        char    *str;
        int n;

        n = va_arg(arg, int);
        str = ft_atoi(n);
        if (info->width > ft_strlen(str))
        {
                p_w = adjust_width(&info);
                if (info->prec > ft_strlen(str))
                        str = adjust_prec(&info, str);
                if (info->showsign == 1)
                {
                        if (n > 0)
                                str = ft_strjoin("+", str);
                        if (n > 0)
                                str = ft_strjoin("-", str);
                }
                if (info->spacd == 1)
                        if (n < 0)
                                str = ft_strjoin("-", str);
                if (info->pad == 1 && info->prec == 0)
                        // 0으로 바꾸기
                ft_memcpy(


                        
        }
        else
                ft_putstr_fd(str);

        



