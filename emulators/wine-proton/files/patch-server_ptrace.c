Split ptrace between high and low for 64 bit,
revert https://github.com/ValveSoftware/wine/commit/9890af7bb352f93645bb0c7c705ff536c78efb02
--- server/ptrace.c.orig	2025-11-06 09:54:15 UTC
+++ server/ptrace.c
@@ -314,7 +314,34 @@ static int read_thread_long( struct thread *thread, vo
 /* read a long from a thread address space */
 static int read_thread_long( struct thread *thread, void *addr, unsigned long *data )
 {
+#if defined(__FreeBSD__) && defined(__x86_64__)
+
+    int lo, hi;
+
     errno = 0;
+
+    lo = ptrace(PTRACE_PEEKDATA, get_ptrace_pid(thread), (caddr_t)addr, 0);
+    if (lo == -1 && errno)
+    {
+      *data = -1;
+      file_set_error();
+      return -1;
+    }
+
+    hi = ptrace(PTRACE_PEEKDATA, get_ptrace_pid(thread), (caddr_t)addr + 4, 0);
+    if (hi == -1 && errno)
+    {
+      *data = -1;
+      file_set_error();
+      return -1;
+    }
+
+    *data = hi;
+    *data = (*data << 32) + lo;
+
+    return 0;
+#else
+    errno = 0;
     *data = ptrace( PTRACE_PEEKDATA, get_ptrace_pid(thread), (caddr_t)addr, 0 );
     if ( *data == -1 && errno)
     {
@@ -322,6 +349,7 @@ static int read_thread_long( struct thread *thread, vo
         return -1;
     }
     return 0;
+#endif
 }
 
 static int read_thread_int( struct thread *thread, void *addr, unsigned int *data )
@@ -334,6 +362,34 @@ static int read_thread_int( struct thread *thread, voi
     return ret;
 }
 
+#if !defined(linux)
+/* write a long to a thread address space */
+static long write_thread_long( struct thread *thread, void *addr, unsigned long data, unsigned long mask )
+{
+    unsigned long old_data;
+    int res;
+
+    if (mask != ~0ul)
+    {
+        if (read_thread_long( thread, addr, &old_data ) == -1) return -1;
+        data = (data & mask) | (old_data & ~mask);
+    }
+
+#if defined(__FreeBSD__) && defined(__x86_64__)
+    if ((res = ptrace(PTRACE_POKEDATA, get_ptrace_pid(thread), (caddr_t)addr,     data))       == -1 ||
+        (res = ptrace(PTRACE_POKEDATA, get_ptrace_pid(thread), (caddr_t)addr + 4, data >> 32)) == -1)
+    {
+        file_set_error();
+    }
+#else
+    if ((res = ptrace( PTRACE_POKEDATA, get_ptrace_pid(thread), (caddr_t)addr, data )) == -1)
+        file_set_error();
+#endif
+
+    return res;
+}
+#endif
+
 /* return a thread of the process suitable for ptracing */
 static struct thread *get_ptrace_thread( struct process *process )
 {
@@ -414,11 +470,30 @@ int read_process_memory( struct process *process, clie
     return !len;
 }
 
+#if !defined(linux)
+/* make sure we can write to the whole address range */
+/* len is the total size (in longs) */
+static int check_process_write_access( struct thread *thread, long *addr, data_size_t len )
+{
+    int page = get_page_size() / sizeof(long);
+
+    for (;;)
+    {
+        if (write_thread_long( thread, addr, 0, 0 ) == -1) return 0;
+        if (len <= page) break;
+        addr += page;
+        len -= page;
+    }
+    return (write_thread_long( thread, addr + len - 1, 0, 0 ) != -1);
+}
+#endif
+
 /* write data to a process memory space */
 int write_process_memory( struct process *process, client_ptr_t ptr, data_size_t size, const char *src,
                           data_size_t *written )
 {
     struct thread *thread = get_ptrace_thread( process );
+#if defined(linux)
     struct iovec local, remote;
     ssize_t len;
 
@@ -446,6 +521,95 @@ int write_process_memory( struct process *process, cli
         return 0;
     }
     return 1;
+#else
+    int ret = 0;
+    long data = 0;
+    data_size_t len;
+    long *addr;
+    unsigned long first_mask, first_offset, last_mask, last_offset;
+
+    if (!thread) return 0;
+
+    if ((unsigned long)ptr != ptr)
+    {
+        set_error( STATUS_ACCESS_DENIED );
+        return 0;
+    }
+
+    /* compute the mask for the first long */
+    first_mask = ~0;
+    first_offset = ptr % sizeof(long);
+    memset( &first_mask, 0, first_offset );
+
+    /* compute the mask for the last long */
+    last_offset = (size + first_offset) % sizeof(long);
+    if (!last_offset) last_offset = sizeof(long);
+    last_mask = 0;
+    memset( &last_mask, 0xff, last_offset );
+
+    addr = (long *)(unsigned long)(ptr - first_offset);
+    len = (size + first_offset + sizeof(long) - 1) / sizeof(long);
+
+    if (written)
+    {
+        written = len;
+    }
+
+    if (suspend_for_ptrace( thread ))
+    {
+        if (!check_process_write_access( thread, addr, len ))
+        {
+            set_error( STATUS_ACCESS_DENIED );
+            goto done;
+        }
+
+        if (len > 3)
+        {
+            char procmem[24];
+            int fd;
+
+            snprintf( procmem, sizeof(procmem), "/proc/%u/mem", process->unix_pid );
+            if ((fd = open( procmem, O_WRONLY )) != -1)
+            {
+                ssize_t r = pwrite( fd, src, size, ptr );
+                close( fd );
+                if (r == size)
+                {
+                    ret = 1;
+                    goto done;
+                }
+            }
+        }
+
+        /* first word is special */
+        if (len > 1)
+        {
+            memcpy( (char *)&data + first_offset, src, sizeof(long) - first_offset );
+            src += sizeof(long) - first_offset;
+            if (write_thread_long( thread, addr++, data, first_mask ) == -1) goto done;
+            first_offset = 0;
+            len--;
+        }
+        else last_mask &= first_mask;
+
+        while (len > 1)
+        {
+            memcpy( &data, src, sizeof(long) );
+            src += sizeof(long);
+            if (write_thread_long( thread, addr++, data, ~0ul ) == -1) goto done;
+            len--;
+        }
+
+        /* last word is special too */
+        memcpy( (char *)&data + first_offset, src, last_offset - first_offset );
+        if (write_thread_long( thread, addr, data, last_mask ) == -1) goto done;
+        ret = 1;
+
+    done:
+        resume_after_ptrace( thread );
+    }
+    return ret;
+#endif
 }
 
 /* retrieve an LDT selector entry */
