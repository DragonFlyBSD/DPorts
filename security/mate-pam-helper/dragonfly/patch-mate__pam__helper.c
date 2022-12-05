--- mate_pam_helper.c.orig	2022-01-18 23:16:22 UTC
+++ mate_pam_helper.c
@@ -148,7 +148,7 @@ again:
 
 	status = pam_authenticate(pamh, 0);
 	if (status == PAM_SUCCESS) {
-		int acct_status;
+		int __unused acct_status;
 
 		acct_status = pam_acct_mgmt(pamh, 0);
 		acct_status = pam_setcred(pamh, PAM_REINITIALIZE_CRED);
