--- sal/osl/unx/file.cxx.orig	2012-11-28 09:29:53.000000000 +0100
+++ sal/osl/unx/file.cxx	2013-01-02 09:30:28.000000000 +0100
@@ -388,8 +388,6 @@
         return osl_File_E_None;
     }
 
-#if defined(LINUX) || defined(SOLARIS)
-
     ssize_t nBytes = ::pread (m_fd, pBuffer, nBytesRequested, nOffset);
     if ((-1 == nBytes) && (EOVERFLOW == errno))
     {
@@ -402,22 +400,6 @@
     if (-1 == nBytes)
         return oslTranslateFileError (OSL_FET_ERROR, errno);
 
-#else /* !(LINUX || SOLARIS) */
-
-    if (nOffset != m_offset)
-    {
-        if (-1 == ::lseek (m_fd, nOffset, SEEK_SET))
-            return oslTranslateFileError (OSL_FET_ERROR, errno);
-        m_offset = nOffset;
-    }
-
-    ssize_t nBytes = ::read (m_fd, pBuffer, nBytesRequested);
-    if (-1 == nBytes)
-        return oslTranslateFileError (OSL_FET_ERROR, errno);
-    m_offset += nBytes;
-
-#endif /* !(LINUX || SOLARIS) */
-
     OSL_FILE_TRACE("FileHandle_Impl::readAt(%d, %lld, %ld)", m_fd, nOffset, nBytes);
     *pBytesRead = nBytes;
     return osl_File_E_None;
@@ -437,28 +419,10 @@
     if (!(m_state & STATE_WRITEABLE))
         return osl_File_E_BADF;
 
-#if defined(LINUX) || defined(SOLARIS)
-
     ssize_t nBytes = ::pwrite (m_fd, pBuffer, nBytesToWrite, nOffset);
     if (-1 == nBytes)
         return oslTranslateFileError (OSL_FET_ERROR, errno);
 
-#else /* !(LINUX || SOLARIS) */
-
-    if (nOffset != m_offset)
-    {
-        if (-1 == ::lseek (m_fd, nOffset, SEEK_SET))
-            return oslTranslateFileError (OSL_FET_ERROR, errno);
-        m_offset = nOffset;
-    }
-
-    ssize_t nBytes = ::write (m_fd, pBuffer, nBytesToWrite);
-    if (-1 == nBytes)
-        return oslTranslateFileError (OSL_FET_ERROR, errno);
-    m_offset += nBytes;
-
-#endif /* !(LINUX || SOLARIS) */
-
     OSL_FILE_TRACE("FileHandle_Impl::writeAt(%d, %lld, %ld)", m_fd, nOffset, nBytes);
     m_size = std::max (m_size, sal::static_int_cast< sal_uInt64 >(nOffset + nBytes));
 
