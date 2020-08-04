cmake_minimum_required(VERSION 3.10)
project(stunclient C)

set(CMAKE_C_STANDARD 99)


link_libraries(rt)
link_libraries(nsl)
link_libraries(resolv)
link_libraries(pthread)
link_libraries(crypto)
link_libraries(ssl)
link_libraries(event_core)
link_libraries(event_extra)
link_libraries(event_openssl)
link_libraries(event_pthreads)








add_executable(stunclient main.c common/stun_buffer.c common/stun_buffer.h common/apputils.c common/apputils.h common/ns_turn_utils.c common/ns_turn_utils.h common/ns_turn_ioaddr.c common/ns_turn_ioaddr.h common/ns_turn_msg.c common/ns_turn_msg.h common/ns_turn_msg_addr.h common/ns_turn_msg.c common/ns_turn_msg_addr.h common/ns_turn_msg_addr.c)