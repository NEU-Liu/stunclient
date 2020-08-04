#ifndef __NST_OPENSSL_LIB__
#define __NST_OPENSSL_LIB__

#include <openssl/md5.h>
#include <openssl/hmac.h>
#include <openssl/ssl.h>
#include <openssl/bio.h>
#include <openssl/err.h>
#include <openssl/rand.h>
#include <openssl/crypto.h>
#include <openssl/opensslv.h>
#include <openssl/dh.h>
#include <openssl/bn.h>

#if (defined LIBRESSL_VERSION_NUMBER && OPENSSL_VERSION_NUMBER == 0x20000000L)
#undef OPENSSL_VERSION_NUMBER
#define OPENSSL_VERSION_NUMBER 0x1000107FL
#endif

#endif //__NST_OPENSSL_LIB__
