#ifndef __LIB_TURN_MSG_DEFS_NEW__
#define __LIB_TURN_MSG_DEFS_NEW__

/***** POST-RFC5766 FRESH SPECS ***********/

/* Origin ==>> */
#define STUN_MAX_ORIGIN_SIZE (127)
#define STUN_ATTRIBUTE_ORIGIN (0x802F)
/* <<== Origin */

/* Mobility ==>> */
/* conflicts with third-party authorization ! 0x802E is used for third-party authorization now */
#define STUN_ATTRIBUTE_MOBILITY_TICKET (0x8030)
/* <<== Mobility */

/* Bandwidth */

#define STUN_ATTRIBUTE_NEW_BANDWIDTH (0x8000 + STUN_ATTRIBUTE_BANDWIDTH)

/* <<== Bandwidth */

////////////// SSODA ///////////////////

#define STUN_ATTRIBUTE_ADDITIONAL_ADDRESS_FAMILY (0x8032)
#define STUN_ATTRIBUTE_ADDRESS_ERROR_CODE (0x8033)

#endif //__LIB_TURN_MSG_DEFS_NEW__
