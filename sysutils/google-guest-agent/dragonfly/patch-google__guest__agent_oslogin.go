--- google_guest_agent/oslogin.go.orig	2026-07-23 22:27:58 UTC
+++ google_guest_agent/oslogin.go
@@ -340,7 +340,7 @@
 	if skey {
 		authorizedKeysCommand = "AuthorizedKeysCommand /usr/bin/google_authorized_keys_sk"
 	}
-	if runtime.GOOS == "freebsd" {
+	if runtime.GOOS == "freebsd" || runtime.GOOS == "dragonfly" {
 		authorizedKeysCommand = "AuthorizedKeysCommand /usr/local/bin/google_authorized_keys"
 		if skey {
 			authorizedKeysCommand = "AuthorizedKeysCommand /usr/local/bin/google_authorized_keys_sk"
@@ -421,7 +421,7 @@
 				line = strings.Replace(line, oslogin, "", 1)
 			}
 
-			if runtime.GOOS == "freebsd" {
+			if runtime.GOOS == "freebsd" || runtime.GOOS == "dragonfly" {
 				line = strings.Replace(line, "compat", "files", 1)
 			}
 		}
@@ -456,7 +456,7 @@
 	authGroup := "auth       [default=ignore] pam_group.so"
 	sessionHomeDir := "session    [success=ok default=ignore] pam_mkhomedir.so"
 
-	if runtime.GOOS == "freebsd" {
+	if runtime.GOOS == "freebsd" || runtime.GOOS == "dragonfly" {
 		authOSLogin = "auth       optional pam_oslogin_login.so"
 		authGroup = "auth       optional pam_group.so"
 		sessionHomeDir = "session    optional pam_mkhomedir.so"
@@ -549,7 +549,7 @@
 
 func createOSLoginSudoersFile() error {
 	osloginSudoers := "/etc/sudoers.d/google-oslogin"
-	if runtime.GOOS == "freebsd" {
+	if runtime.GOOS == "freebsd" || runtime.GOOS == "dragonfly" {
 		osloginSudoers = "/usr/local" + osloginSudoers
 	}
 	sudoFile, err := os.OpenFile(osloginSudoers, os.O_WRONLY|os.O_CREATE|os.O_EXCL, 0440)
