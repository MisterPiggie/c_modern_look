#define SRINGIZE(x) #x
#define EXPAND_MACRO(x) SRINGIZE(x)
#define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file " __FILE__)
