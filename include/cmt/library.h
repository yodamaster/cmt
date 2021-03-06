/*
 * Copyright (c), Recep Aslantas.
 * MIT License (MIT), http://opensource.org/licenses/MIT
 */

#ifndef cmt_library_h
#define cmt_library_h
#ifdef __cplusplus
extern "C" {
#endif

#include "common.h"
#include "types.h"
#include "enums.h"

MT_EXPORT
MtLibrary*
mtDefaultLibrary(MtDevice *device);

MT_EXPORT
MtFunction*
mtCreateFunc(MtLibrary *lib, const char *name);

#ifdef __cplusplus
}
#endif
#endif /* cmt_library_h */
