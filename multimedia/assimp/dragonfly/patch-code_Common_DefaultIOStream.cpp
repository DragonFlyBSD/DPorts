--- code/Common/DefaultIOStream.cpp.orig	2021-12-04 20:01:52 UTC
+++ code/Common/DefaultIOStream.cpp
@@ -156,7 +156,7 @@ size_t DefaultIOStream::FileSize() const
         if (0 != err)
             return 0;
         mCachedSize = (size_t)(fileStat.st_size);
-#elif defined __GNUC__ || defined __APPLE__ || defined __MACH__ || defined __FreeBSD__
+#elif defined __GNUC__ || defined __APPLE__ || defined __MACH__ || defined __FreeBSD__ || defined __DragonFly__
         struct stat fileStat;
         int err = stat(mFilename.c_str(), &fileStat);
         if (0 != err)
