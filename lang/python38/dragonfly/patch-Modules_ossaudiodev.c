--- Modules/ossaudiodev.c.orig	2019-10-14 13:34:47 UTC
+++ Modules/ossaudiodev.c
@@ -1214,16 +1214,36 @@ PyInit_ossaudiodev(void)
 
     /* Expose all the ioctl numbers for masochists who like to do this
        stuff directly. */
+#ifdef SNDCTL_COPR_HALT
     _EXPORT_INT(m, SNDCTL_COPR_HALT);
+#endif
+#ifdef SNDCTL_COPR_LOAD
     _EXPORT_INT(m, SNDCTL_COPR_LOAD);
+#endif
+#ifdef SNDCTL_COPR_RCODE
     _EXPORT_INT(m, SNDCTL_COPR_RCODE);
+#endif
+#ifdef SNDCTL_COPR_RCVMSG
     _EXPORT_INT(m, SNDCTL_COPR_RCVMSG);
+#endif
+#ifdef SNDCTL_COPR_RDATA
     _EXPORT_INT(m, SNDCTL_COPR_RDATA);
+#endif
+#ifdef SNDCTL_COPR_RESET
     _EXPORT_INT(m, SNDCTL_COPR_RESET);
+#endif
+#ifdef SNDCTL_COPR_RUN
     _EXPORT_INT(m, SNDCTL_COPR_RUN);
+#endif
+#ifdef SNDCTL_COPR_SENDMSG
     _EXPORT_INT(m, SNDCTL_COPR_SENDMSG);
+#endif
+#ifdef SNDCTL_COPR_WCODE
     _EXPORT_INT(m, SNDCTL_COPR_WCODE);
+#endif
+#ifdef SNDCTL_COPR_WDATA
     _EXPORT_INT(m, SNDCTL_COPR_WDATA);
+#endif
 #ifdef SNDCTL_DSP_BIND_CHANNEL
     _EXPORT_INT(m, SNDCTL_DSP_BIND_CHANNEL);
 #endif
@@ -1269,8 +1289,12 @@ PyInit_ossaudiodev(void)
     _EXPORT_INT(m, SNDCTL_FM_4OP_ENABLE);
     _EXPORT_INT(m, SNDCTL_FM_LOAD_INSTR);
     _EXPORT_INT(m, SNDCTL_MIDI_INFO);
+#ifdef SNDCTL_MIDI_MPUCMD
     _EXPORT_INT(m, SNDCTL_MIDI_MPUCMD);
+#endif
+#ifdef SNDCTL_MIDI_MPUMODE
     _EXPORT_INT(m, SNDCTL_MIDI_MPUMODE);
+#endif
     _EXPORT_INT(m, SNDCTL_MIDI_PRETIME);
     _EXPORT_INT(m, SNDCTL_SEQ_CTRLRATE);
     _EXPORT_INT(m, SNDCTL_SEQ_GETINCOUNT);
