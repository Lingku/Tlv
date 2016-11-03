#include <stdio.h>
#include "tlv_core_wrapper.h"

int main() {
    TlvCore* c = tlv_core_wrapper_new();
    printf("%d\n", c);
    tlv_core_wrapper_push_back(c, "H");
    tlv_core_wrapper_push_back(c, "e");
    tlv_core_wrapper_push_back(c, "l");
    tlv_core_wrapper_push_back(c, "l");
    tlv_core_wrapper_push_back(c, "o");
    tlv_core_wrapper_push_back(c, " ");
    tlv_core_wrapper_push_back(c, "w");
    tlv_core_wrapper_push_back(c, "o");
    tlv_core_wrapper_push_back(c, "r");
    tlv_core_wrapper_push_back(c, "l");
    tlv_core_wrapper_push_back(c, "d");
    tlv_core_wrapper_push_back(c, ".");

    printf("Size: %d\n", tlv_core_wrapper_size(c));
    printf("%s\n", tlv_core_wrapper_serialise(c));

    tlv_core_wrapper_delete(c);


    TlvCore* self = tlv_core_wrapper_new();
    tlv_core_wrapper_push_back(self, "Hello World!");

    printf("Size: %d\n", tlv_core_wrapper_size(self));
    printf("%s\n", tlv_core_wrapper_serialise(self));

    return 0;
}