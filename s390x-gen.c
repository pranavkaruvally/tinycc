#ifdef TARGET_DEFS_ONLY

/* number of available registers */
#define NB_REGS 32 // r0 to r15 and f0 to f15 | TODO: Find the right number
#define CONFIG_ASM_TCC

// Registers
// TODO: Add more registers
#define TREG_R(x) (x) // x = 0..15
#define TREG_F(x) (x + 16) // x = 0..15

// Register classes and registers
// TODO: Add more register classes
#define RC_INT (1 << 0)
#define RC_FLOAT (1 << 1)

#define RC_R(x) (1 << (2 + (x))) // x = 0..15
#define RC_F(x) (1 << (16 + (x))) // x = 0..15

#define RC_IRET (RC_R(2)) // int return register class
#define RC_FRET (RC_F(0)) // float return register class 

#define REG_IRET (TREG_R(2)) // int return register class
#define REG_FRET (TREG_F(0)) // float return register class

#define PTR_SIZE 8

/* long double size and alignment, in bytes */
#define LDOUBLE_SIZE  16
#define LDOUBLE_ALIGN  8

/* maximum alignment (for aligned attirubte support) */
#define MAX_ALIGN      8

#define CHAR_IS_UNSIGNED

#else
#define USING_GLOBALS

#include "tcc.h"

#include <signal.h> // To throw a signal if we hit an unimplemented function. TODO: REMOVE

ST_DATA const char * const target_machine_defs = 
    "__s390x\0"
    "__s390x__\0"
    ;

ST_DATA const int reg_classes[NB_REGS] = {
    RC_INT | RC_R(0),
    RC_INT | RC_R(1),
    RC_INT | RC_R(2),
    RC_INT | RC_R(3),
    RC_INT | RC_R(4),
    RC_INT | RC_R(5),
    RC_INT | RC_R(6),
    RC_INT | RC_R(7),
    RC_INT | RC_R(8),
    RC_INT | RC_R(9),
    RC_INT | RC_R(10),
    RC_INT | RC_R(11),
    RC_INT | RC_R(12),
    RC_INT | RC_R(13),
    RC_INT | RC_R(14),
    RC_INT | RC_R(15),
    RC_FLOAT | RC_F(0),
    RC_FLOAT | RC_F(1),
    RC_FLOAT | RC_F(2),
    RC_FLOAT | RC_F(3),
    RC_FLOAT | RC_F(4),
    RC_FLOAT | RC_F(5),
    RC_FLOAT | RC_F(6),
    RC_FLOAT | RC_F(7),
    RC_FLOAT | RC_F(8),
    RC_FLOAT | RC_F(9),
    RC_FLOAT | RC_F(10),
    RC_FLOAT | RC_F(11),
    RC_FLOAT | RC_F(12),
    RC_FLOAT | RC_F(13),
    RC_FLOAT | RC_F(14),
    RC_FLOAT | RC_F(15),
};

#if defined(CONFIG_TCC_BCHECK)
ST_DATA int func_bound_add_epilog;
#endif

ST_FUNC void gsym_addr(int t, int a)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void store(int r, SValue *sv)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void load(int r, SValue *sv)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gfunc_call(int nb_args)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

static void gen_opil(int op, int ll)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_opi(int op)
{
    gen_opil(op, 0);
}

ST_FUNC void gen_opl(int op)
{
    gen_opil(op, 1);
}

ST_FUNC void gen_opf(int op)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_cvt_csti(int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_cvt_sxtw(void)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_cvt_itof(int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_cvt_ftoi(int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_cvt_ftof(int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void ggoto(void)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_vla_sp_save(int addr)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_vla_sp_restore(int addr)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_vla_alloc(CType *type, int align)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gfunc_prolog(Sym *func_sym)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC int gfunc_sret(CType *vt, int variadic, CType *ret,
                        int *ret_align, int *regsize)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return -1;
}

ST_FUNC void gfunc_epilog(void)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC void gen_fill_nops(int bytes)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

// Generate forward branch to label:
ST_FUNC int gjmp(int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return t;
}

// Generate branch to known address:
ST_FUNC void gjmp_addr(int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return;
}

ST_FUNC int gjmp_cond(int op, int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return gjmp(t);
}

ST_FUNC int gjmp_append(int n, int t)
{
    /* Dummy function. TODO: Implement */
    raise(SIGINT);
    return t;
}

#endif
