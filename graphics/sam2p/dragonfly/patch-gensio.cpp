c++11 compat

--- gensio.cpp.intermediate	2018-03-02 16:37:39.000000000 +0000
+++ gensio.cpp
@@ -494,7 +494,7 @@ Filter::PipeE::PipeE(GenBuffer::Writable
 
  #if HAVE_PTS_POPEN
   if (!tmpsname) {
-    if (NULLP==(p=popen(redir_cmd(), "w"CFG_PTS_POPEN_B))) Error::sev(Error::EERROR) << "Filter::PipeE" << ": popen() failed: " << (SimBuffer::B().appendDumpC(redir_cmd)) << (Error*)0;
+    if (NULLP==(p=popen(redir_cmd(), "w" CFG_PTS_POPEN_B))) Error::sev(Error::EERROR) << "Filter::PipeE" << ": popen() failed: " << (SimBuffer::B().appendDumpC(redir_cmd)) << (Error*)0;
     signal(SIGPIPE, SIG_IGN); /* Don't abort process with SIGPIPE signals if child cannot read our data */
   } else {
  #else
@@ -622,7 +622,7 @@ slen_t Filter::PipeD::vi_read(char *tobu
   if (state==0) { /* Read the whole stream from `in', write it to `tmpsname' */
    #if HAVE_PTS_POPEN
     if (!tmpsname) {
-      if (NULLP==(p=popen(redir_cmd(), "w"CFG_PTS_POPEN_B))) Error::sev(Error::EERROR) << "Filter::PipeD" << ": popen() failed: " << (SimBuffer::B().appendDumpC(redir_cmd)) << (Error*)0;
+      if (NULLP==(p=popen(redir_cmd(), "w" CFG_PTS_POPEN_B))) Error::sev(Error::EERROR) << "Filter::PipeD" << ": popen() failed: " << (SimBuffer::B().appendDumpC(redir_cmd)) << (Error*)0;
       signal(SIGPIPE, SIG_IGN); /* Don't abort process with SIGPIPE signals if child cannot read our data */
       vi_precopy();
       in.vi_read(0,0);
