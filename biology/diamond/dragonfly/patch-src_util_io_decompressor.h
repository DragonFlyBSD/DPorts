--- src/util/io/decompressor.h.orig
+++ src/util/io/decompressor.h
@@ -82,7 +82,7 @@
 		return std::fread(buffer, size, count, stream);
 	}
 	int fgetc(FILE* stream) override {
-#if defined(_MSC_VER) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(_MSC_VER) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 		return std::fgetc(stream);
 #else
 		return fgetc_unlocked(stream);
