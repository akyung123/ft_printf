#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// libft 필요 함수
// atoi, strjoin, calloc, memcpy, putstr, bezero
size_t parse_printf_format(const


typedef struct printf_info
{
        int prec;   // precision
        int width;
        wchar_t spec;
        unsigned int alt:1;     // # flag
        unsigned int spacd:1;   // ' ' flag
        unsigned int left:1;    // - flag
        unsigned int showsign:1;    // + flag
        unsigned int pad:1;     // 0  fg
        // add if needed
#endif
