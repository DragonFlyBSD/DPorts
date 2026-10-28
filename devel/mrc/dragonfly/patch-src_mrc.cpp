--- src/mrc.cpp.orig	2026-10-26 02:13:52 UTC
+++ src/mrc.cpp
@@ -1229,6 +1229,10 @@ int main(int argc, char *argv[])
 			elfc.elf_abi = ELFOSABI_FREEBSD;
 			int r = strlen(argv[0]);
 			strcpy(exePath, argv[0]);
+# elif __DragonFly__
+			elfc.elf_abi = ELFOSABI_NONE;
+			int r = strlen(argv[0]);
+			strcpy(exePath, argv[0]);
 # elif __GNU__
 			elfc.elf_abi = ELFOSABI_GNU;
 			int r = readlink("/proc/self/exe", exePath, PATH_MAX);
