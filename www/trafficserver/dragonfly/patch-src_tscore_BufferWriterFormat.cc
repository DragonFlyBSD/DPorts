--- src/tscore/BufferWriterFormat.cc.orig	2019-01-18 22:13:53 UTC
+++ src/tscore/BufferWriterFormat.cc
@@ -993,7 +993,7 @@ BWF_ThreadID(ts::BufferWriter &w, ts::BW
 void
 BWF_ThreadName(ts::BufferWriter &w, ts::BWFSpec const &spec)
 {
-#if defined(__FreeBSD_version)
+#if defined(__FreeBSD_version) || defined(__DragonFly__)
   bwformat(w, spec, "thread"sv); // no thread names in FreeBSD.
 #else
   char name[32]; // manual says at least 16, bump that up a bit.
