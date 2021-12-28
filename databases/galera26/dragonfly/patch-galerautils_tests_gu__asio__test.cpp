 The DragonFly BSD does not provide struct tcp_info

--- galerautils/tests/gu_asio_test.cpp.orig	2021-07-22 15:29:52 UTC
+++ galerautils/tests/gu_asio_test.cpp
@@ -888,6 +888,7 @@ START_TEST(test_tcp_close_server)
 }
 END_TEST
 
+#ifndef __DragonFly__
 template <class Acceptor>
 void test_get_tcp_info_common(gu::AsioIoService& io_service,
                               Acceptor& acceptor,
@@ -905,7 +906,9 @@ void test_get_tcp_info_common(gu::AsioIo
     }
     (void)socket->get_tcp_info();
 }
+#endif
 
+#ifndef __DragonFly__
 START_TEST(test_tcp_get_tcp_info)
 {
     gu::AsioIoService io_service;
@@ -917,6 +920,7 @@ START_TEST(test_tcp_get_tcp_info)
     test_get_tcp_info_common(io_service, *acceptor, *acceptor_handler);
 }
 END_TEST
+#endif
 
 #ifdef GALERA_HAVE_SSL
 
@@ -1130,6 +1134,7 @@ START_TEST(test_ssl_close_server)
 }
 END_TEST
 
+#ifndef __DragonFly__
 START_TEST(test_ssl_get_tcp_info)
 {
     gu::AsioIoService io_service(get_ssl_config());
@@ -1141,6 +1146,7 @@ START_TEST(test_ssl_get_tcp_info)
     test_get_tcp_info_common(io_service, *acceptor, *acceptor_handler);
 }
 END_TEST
+#endif
 
 START_TEST(test_ssl_compression_option)
 {
@@ -2111,9 +2117,11 @@ Suite* gu_asio_suite()
     tcase_add_test(tc, test_tcp_close_server);
     suite_add_tcase(s, tc);
 
+#ifndef __DragonFly__
     tc = tcase_create("test_tcp_get_tcp_info");
     tcase_add_test(tc, test_tcp_get_tcp_info);
     suite_add_tcase(s, tc);
+#endif
 
 #ifdef GALERA_HAVE_SSL
     //
@@ -2184,9 +2192,11 @@ Suite* gu_asio_suite()
     tcase_add_test(tc, test_ssl_close_server);
     suite_add_tcase(s, tc);
 
+#ifndef __DragonFly__
     tc = tcase_create("test_ssl_get_tcp_info");
     tcase_add_test(tc, test_ssl_get_tcp_info);
     suite_add_tcase(s, tc);
+#endif
 
     tc = tcase_create("test_ssl_compression_option");
     tcase_add_test(tc, test_ssl_compression_option);
