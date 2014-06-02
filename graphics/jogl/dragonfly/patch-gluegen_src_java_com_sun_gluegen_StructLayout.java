--- gluegen/src/java/com/sun/gluegen/StructLayout.java.intermediate	2014-06-02 07:21:38.565261000 +0000
+++ gluegen/src/java/com/sun/gluegen/StructLayout.java
@@ -139,8 +139,8 @@ public class StructLayout {
                (os.startsWith("mac os") && cpu.equals("ppc")) ||
                (os.startsWith("mac os") && cpu.equals("i386")) ||
                (os.startsWith("mac os") && cpu.equals("x86_64")) ||
-               (os.startsWith("freebsd") && cpu.equals("i386")) ||
-               (os.startsWith("freebsd") && cpu.equals("amd64")) ||
+               (os.endsWith("bsd") && cpu.equals("i386")) ||
+               (os.endsWith("bsd") && cpu.equals("amd64")) ||
                (os.startsWith("hp-ux") && cpu.equals("pa_risc2.0"))
                ) {
       // FIXME: make struct alignment configurable? May need to change
