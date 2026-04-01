typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;
union {
    struct {
        DWORD eax, ebx, ecx, edx;
    } dword;
    struct {
        WORD axl, axh,
             bxl, bxh,
             cxl, cxh,
             dxl, dxh;
    } word;
    struct {
        BYTE al, ah, al_d1, al_d2,
             bl, bh, bl_d1, bl_d2,
             cl, ch, cl_d1, cl_d2,
             dl, dh, dl_d1, dl_d2;


    } byte;
} regs;
