DragonFly has no sigqueue(2) implementation

--- boost/test/impl/execution_monitor.ipp.orig	2019-04-09 19:36:35 UTC
+++ boost/test/impl/execution_monitor.ipp
@@ -383,10 +383,12 @@ system_signal_exception::report() const
                       (int)m_sig_info->si_uid, (int)m_sig_info->si_pid );
         break;
 #endif
+#ifndef __DragonFly__
     case SI_QUEUE:
         report_error( execution_exception::system_error,
                       "signal: sent by sigqueue()" );
         break;
+#endif
     case SI_TIMER:
         report_error( execution_exception::system_error,
                       "signal: the expiration of a timer set by timer_settimer()" );
