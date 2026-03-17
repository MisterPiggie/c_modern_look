#include <string.h>
void build_index_url( const char *domain, char *index_url)
{
    strcat(index_url, "http://www.");
    strcat(strcat(index_url, domain), "/index.html");
}
