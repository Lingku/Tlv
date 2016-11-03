//
// Created by us on 03/11/2016.
//

#include "TlvCore.h"
#include "tlv_core_wrapper.h"
#include <stdio.h>

extern "C" {

TlvCore *tlv_core_wrapper_new() {
    TlvCore *self;
    self = new TlvCore();
    return self;
}

void tlv_core_wrapper_push_back(TlvCore *self, const char *a) {
    self->push_back(a);
}

int tlv_core_wrapper_size(TlvCore *self) {
    return self->size();
}

const char* tlv_core_wrapper_serialise(TlvCore *self)
{
    return self->serialize();
}

void tlv_core_wrapper_delete(TlvCore *self)
{
//    if (self != nullptr) {
        delete self;
//        self = nullptr;
//        printf("= = = = = =\n");
//    }
//    else{
//        printf("= = = = = =\n");
//    }

}

}  //extern "c"
