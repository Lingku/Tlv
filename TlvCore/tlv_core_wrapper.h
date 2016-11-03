//
// Created by us on 03/11/2016.
//

#ifndef TLV_CORE_WRAPPER_H
#define TLV_CORE_WRAPPER_H

#ifdef __cplusplus
class TlvCore;
extern "C" {
#else
struct TlvCore;
typedef struct TlvCore TlvCore;
#endif

TlvCore* tlv_core_wrapper_new();

void tlv_core_wrapper_push_back(TlvCore *self, const char *a);

int tlv_core_wrapper_size(TlvCore *self);

const char* tlv_core_wrapper_serialise(TlvCore *self);

void tlv_core_wrapper_delete(TlvCore *self);

#ifdef __cplusplus
}
#endif
#endif //TLV_CORE_WRAPPER_H
