--- libmachine/crashreport/os_dragonfly.go.orig	1970-01-01 01:00:00.000000000 +0100
+++ libmachine/crashreport/os_dragonfly.go	2020-07-16 19:47:37.938116000 +0200
@@ -0,0 +1,12 @@
+package crashreport
+
+import "os/exec"
+
+func localOSVersion() string {
+	command := exec.Command("uname", "-r")
+	output, err := command.Output()
+	if err != nil {
+		return ""
+	}
+	return string(output)
+}
