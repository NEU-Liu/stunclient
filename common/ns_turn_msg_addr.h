#ifndef __LIB_TURN_MSG_ADDR__
#define __LIB_TURN_MSG_ADDR__

#include "ns_turn_ioaddr.h"

#ifdef __cplusplus
extern "C" {
#endif

///////////////////////////////////////////

int stun_addr_encode(const ioa_addr* ca, uint8_t *cfield, int *clen, int xor_ed, uint32_t mc, const uint8_t *tsx_id);
int stun_addr_decode(ioa_addr* ca, const uint8_t *cfield, int len, int xor_ed, uint32_t mc, const uint8_t *tsx_id);

///////////////////////////////////////////

#ifdef __cplusplus
}
#endif

#endif //__LIB_TURN_MSG_ADDR__
