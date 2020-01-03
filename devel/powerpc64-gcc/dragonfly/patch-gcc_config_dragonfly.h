--- gcc/config/dragonfly.h.orig	2016-01-04 14:30:50 UTC
+++ gcc/config/dragonfly.h
@@ -24,7 +24,7 @@ see the files COPYING3 and COPYING.RUNTI
 <http://www.gnu.org/licenses/>.  */
 
 #undef  TARGET_OS_CPP_BUILTINS
-#define TARGET_OS_CPP_BUILTINS()            \
+#define DFBSD_TARGET_OS_CPP_BUILTINS()      \
   do                                        \
     {                                       \
        builtin_define_std ("unix");         \
@@ -36,11 +36,11 @@ see the files COPYING3 and COPYING.RUNTI
   while (0)
 
 #undef  CPP_SPEC
-#define CPP_SPEC \
+#define DFBSD_CPP_SPEC \
  "%(cpp_cpu) %(cpp_arch) %{posix:-D_POSIX_SOURCE}"
 
 #undef  STARTFILE_SPEC
-#define STARTFILE_SPEC	\
+#define DFBSD_STARTFILE_SPEC	\
   "%{!shared: \
      %{pg:gcrt1.o%s} \
      %{!pg: \
@@ -53,11 +53,11 @@ see the files COPYING3 and COPYING.RUNTI
    %{shared|pie:crtbeginS.o%s;:crtbegin.o%s}"
 
 #undef  ENDFILE_SPEC
-#define ENDFILE_SPEC \
+#define DFBSD_ENDFILE_SPEC \
   "%{shared|pie:crtendS.o%s;:crtend.o%s} crtn.o%s"
 
 #undef  LIB_SPEC
-#define LIB_SPEC \
+#define DFBSD_LIB_SPEC \
   "%{pthread:-lpthread} -lc"
 
 #if defined(HAVE_LD_EH_FRAME_HDR)
@@ -89,6 +89,11 @@ see the files COPYING3 and COPYING.RUNTI
 
 #undef  LINK_SPEC
 #define LINK_SPEC DFBSD_LINK_SPEC
+#define STARTFILE_SPEC DFBSD_STARTFILE_SPEC
+#define ENDFILE_SPEC DFBSD_ENDFILE_SPEC
+#define TARGET_OS_CPP_BUILTINS DFBSD_TARGET_OS_CPP_BUILTINS
+#define CPP_SPEC DFBSD_CPP_SPEC
+#define LIB_SPEC DFBSD_LIB_SPEC
 
 #define DFBSD_DYNAMIC_LINKER "/usr/libexec/ld-elf.so.2"
 
