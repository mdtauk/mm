#ifndef Z_EN_BOMBF_H
#define Z_EN_BOMBF_H

#include "global.h"

struct EnBombf;

typedef void (*EnBombfActionFunc)(struct EnBombf* this, GlobalContext* globalCtx);

typedef struct EnBombf {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char unk_144[0xB0];
    /* 0x01F4 */ EnBombfActionFunc actionFunc;
    /* 0x01F8 */ char unk_1F8[0x10];
} EnBombf; // size = 0x208

extern const ActorInit En_Bombf_InitVars;

#endif // Z_EN_BOMBF_H
