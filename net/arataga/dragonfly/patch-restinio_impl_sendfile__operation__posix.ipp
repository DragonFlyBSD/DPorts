--- restinio/impl/sendfile_operation_posix.ipp.intermediate	2020-12-27 13:07:15.000000000 +0000
+++ restinio/impl/sendfile_operation_posix.ipp
@@ -211,12 +211,16 @@ class sendfile_operation_runner_t< asio_
 						std::min< file_size_t >( m_remained_size, m_chunk_size ) ),
 					nullptr, // struct	sf_hdtr	*hdtr
 					&n, // sbytes
+#ifdef __DragonFly__
+					0
+#else
 					// Is 16 a reasonable constant here.
 #if __FreeBSD__ >= 11
 					SF_FLAGS( 16, SF_NOCACHE )
 #else
 					SF_MNOWAIT
 #endif
+#endif
 					);
 
 			// Shift the number of bytes successfully sent.
