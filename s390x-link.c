#ifdef TARGET_DEFS_ONLY

#define EM_TCC_TARGET EM_S390X

#define R_DATA_32  R_S390X_32
#define R_DATA_PTR R_S390X_64
#define R_JMP_SLOT R_S390X_JUMP_SLOT
#define R_GLOB_DAT R_S390X_64
#define R_COPY     R_S390X_COPY
#define R_RELATIVE R_S390X_RELATIVE

#define R_NUM R_S390X_NUM

#define ELF_START_ADDR 0x1000000 // TODO: Find the right value and change
#define ELF_PAGE_SIZE 0X1000

#define PCRELATIVE_DLLPLT 1
#define RELOCATE_DLLPLT 1

#else

#include "tcc.h"

#include <signal.h> // To throw a signal if we hit an unimplemented function. TODO: REMOVE

ST_FUNC void relocate_plt(TCCState *s1)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void relocate(TCCState *s1, ElfW_Rel *rel, int type, unsigned char *ptr,
                addr_t addr, addr_t val)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC int gotplt_entry_type (int reloc_type)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return -1;
}

ST_FUNC unsigned create_plt_entry(TCCState *s1, unsigned got_offset, struct sym_attr *attr)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return 1;
}

ST_FUNC int code_reloc(int reloc_type)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return -1;
}

#endif
