#pragma once

#ifndef __GNUC__
#error "Only support GNU C compiler"
#endif

#define container_of(ptr, type, member)                    \
    ({                                                     \
        const typeof(((type *)0)->member) *__mptr = (ptr); \
        (type *)((char *)__mptr - offsetof(type, member)); \
    })

#define arraysizeof(array) (sizeof(array) / sizeof(*(array)))

#define is_ignored_skerr(err)                                          \
    ((err) == ECONNRESET || (err) == ECONNREFUSED || (err) == EPIPE || \
     (err) == ETIMEDOUT || (err) == EINPROGRESS || (err) == EAGAIN ||  \
     (err) == ENOTCONN)

#define CONFIG_LOCAL_IP   "172.23.255.255"
#define CONFIG_GATEWAY_IP "172.23.255.254"
#define CONFIG_NETMASK    "255.255.255.254"
#define CONFIG_SOCK_ADDR  "127.0.0.1"
#define CONFIG_SOCK_PORT  "1081"
#define CONFIG_HIJACK_DNS "8.8.8.8"
#define CONFIG_MTU        65535
