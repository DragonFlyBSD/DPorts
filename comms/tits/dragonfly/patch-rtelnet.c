--- rtelnet.c.intermediate	2019-07-22 15:34:25 UTC
+++ rtelnet.c
@@ -420,10 +420,12 @@ rtelnet_opt_dont(struct rtelnet_ctx *rc,
 	case TELOPT_AUTHENTICATION:
 	case TELOPT_ENCRYPT:
 	case TELOPT_NEW_ENVIRON:
+#if !defined(__DragonFly__)
 	case TELOPT_TN3270E:
 	case TELOPT_CHARSET:
 	case TELOPT_COMPORT:
 	case TELOPT_KERMIT:
+#endif
 		break;
 
 	case TELOPT_EXOPL:
@@ -501,10 +503,12 @@ rtelnet_opt_do(struct rtelnet_ctx *rc, u
 	case TELOPT_AUTHENTICATION:
 	case TELOPT_ENCRYPT:
 	case TELOPT_NEW_ENVIRON:
+#if !defined(__DragonFly__)
 	case TELOPT_TN3270E:
 	case TELOPT_CHARSET:
 	case TELOPT_COMPORT:
 	case TELOPT_KERMIT:
+#endif
 		break;
 
 	case TELOPT_EXOPL:
@@ -581,10 +585,12 @@ rtelnet_opt_wont(struct rtelnet_ctx *rc,
 	case TELOPT_AUTHENTICATION:
 	case TELOPT_ENCRYPT:
 	case TELOPT_NEW_ENVIRON:
+#if !defined(__DragonFly__)
 	case TELOPT_TN3270E:
 	case TELOPT_CHARSET:
 	case TELOPT_COMPORT:
 	case TELOPT_KERMIT:
+#endif
 		break;
 
 	case TELOPT_EXOPL:
@@ -664,10 +670,12 @@ rtelnet_opt_will(struct rtelnet_ctx *rc,
 	case TELOPT_AUTHENTICATION:
 	case TELOPT_ENCRYPT:
 	case TELOPT_NEW_ENVIRON:
+#if !defined(__DragonFly__)
 	case TELOPT_TN3270E:
 	case TELOPT_CHARSET:
 	case TELOPT_COMPORT:
 	case TELOPT_KERMIT:
+#endif
 		break;
 
 	case TELOPT_EXOPL:
