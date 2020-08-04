#ifndef __TURN_ULIB__
#define __TURN_ULIB__

#if !defined(TURN_LOG_FUNC)
//#define TURN_LOG_FUNC(level, ...) printf (__VA_ARGS__)
#define TURN_LOG_FUNC turn_log_func_default
#endif

#include "ns_turn_ioaddr.h"

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////// LOG //////////////////////////

typedef enum {
  TURN_LOG_LEVEL_INFO = 0,
  TURN_LOG_LEVEL_CONTROL,
  TURN_LOG_LEVEL_WARNING,
  TURN_LOG_LEVEL_ERROR
} TURN_LOG_LEVEL;

#define TURN_VERBOSE_NONE (0)
#define TURN_VERBOSE_NORMAL (1)
#define TURN_VERBOSE_EXTRA (2)

#define eve(v) ((v)==TURN_VERBOSE_EXTRA)

void set_no_stdout_log(int val);
void set_log_to_syslog(int val);
void set_simple_log(int val);

void turn_log_func_default(TURN_LOG_LEVEL level, const char* format, ...);

void addr_debug_print(int verbose, const ioa_addr *addr, const char* s);

/* Log */

extern volatile int _log_time_value_set;
extern volatile turn_time_t _log_time_value;

void rtpprintf(const char *format, ...);
int vrtpprintf(TURN_LOG_LEVEL level, const char *format, va_list args);
void reset_rtpprintf(void);
void set_logfile(const char *fn);
void rollover_logfile(void);

///////////////////////////////////////////////////////

int is_secure_string(const uint8_t *string, int sanitizesql);

///////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif

#endif //__TURN_ULIB__
