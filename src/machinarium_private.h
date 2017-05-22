#ifndef MACHINARIUM_PRIVATE_H_
#define MACHINARIUM_PRIVATE_H_

/*
 * machinarium.
 *
 * cooperative multitasking engine.
*/

#define _GNU_SOURCE 1

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <signal.h>
#include <unistd.h>
#include <pthread.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/epoll.h>
#include <sys/eventfd.h>

#include <openssl/ssl.h>
#include <openssl/crypto.h>
#include <openssl/engine.h>
#include <openssl/conf.h>
#include <openssl/bio.h>
#include <openssl/err.h>

#include "mm_build.h"
#include "mm_macro.h"
#include "mm_list.h"
#include "mm_buf.h"

#include "mm_fd.h"
#include "mm_poll.h"
#include "mm_timer.h"
#include "mm_clock.h"
#include "mm_idle.h"
#include "mm_loop.h"
#include "mm_epoll.h"
#include "mm_socket.h"

#include "mm_context_stack.h"
#include "mm_context.h"
#include "mm_fiber.h"
#include "mm_scheduler.h"
#include "mm_call.h"

#include "mm_thread.h"

#include "mm_machine.h"
#include "mm_machine_mgr.h"
#include "mm_msg.h"
#include "mm_msg_pool.h"
#include "mm_channel.h"
#include "mm_queue_rd.h"
#include "mm_queue_rd_pool.h"
#include "mm_queue.h"
#include "mm.h"

#include "mm_tls.h"
#include "mm_tls_io.h"
#include "mm_io.h"
#include "mm_read.h"
#include "mm_write.h"

#endif
