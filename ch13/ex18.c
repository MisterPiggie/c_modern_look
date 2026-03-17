void remove_filename ( char *url)
{
    char *p = url;
    while (*url++)
        ;
    while (*url-- != '/' && url != p)
        ;
    *url = '\0';
}
