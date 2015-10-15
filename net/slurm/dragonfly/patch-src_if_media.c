--- src/if_media.c.bak	2015-10-04 11:38:57.000000000 +0300
+++ src/if_media.c
@@ -9,11 +9,11 @@
  * $Id: if_media.c,v 1.35 2004/09/27 13:08:59 hscholz Exp $
  *****************************************************************************/
 
-#if defined (__FreeBSD__) || (__OpenBSD__) || (__NetBSD__) || (__MicroBSD__) || (__APPLE__)
+#if defined (__FreeBSD__) || (__DragonFly__) || (__OpenBSD__) || (__NetBSD__) || (__MicroBSD__) || (__APPLE__)
 # define MEDIA_H_SUPPORTED
 #endif
 
-#if defined (__OpenBSD__) || (__NetBSD__) || (__MicroBSD__) || (__APPLE__)
+#if defined (__OpenBSD__) || (__DragonFly__) || (__NetBSD__) || (__MicroBSD__) || (__APPLE__)
 # define NON_FreeBSD 1
 # define WIRELESS 1
 #else
@@ -95,7 +95,7 @@ int get_if_speed (char *ifstring)
      *
      */
 
-#if __FreeBSD__ >= 2 
+#if __FreeBSD__ >= 2 || defined(__DragonFly__)
     type = IFM_TYPE(ifmr.ifm_active);
     physical = IFM_SUBTYPE(ifmr.ifm_active);
 #else
@@ -151,7 +151,7 @@ int get_if_speed (char *ifstring)
                 case IFM_10_STP:
                     speed = 10 * 1000;
                     break;
-#if defined(__OpenBSD__) || (__MicroBSD__) || (__NetBSD__) || (__APPLE__)
+#if defined(__OpenBSD__) || (__DragonFly__) || (__MicroBSD__) || (__NetBSD__) || (__APPLE__)
         case IFM_HPNA_1:
 #else
 #if __FreeBSD__ <= 4
@@ -169,6 +169,7 @@ int get_if_speed (char *ifstring)
         /* fpa doesn't seem to support SIOCGIFMEDIA on FreeBSD
          * so we won't get here but anyway ...
          */
+#ifndef __DragonFly__
         case IFM_FDDI:
             switch (physical)
             {
@@ -181,6 +182,7 @@ int get_if_speed (char *ifstring)
                     speed = ERR_IFACE_NO_SPEED;
             }
             break;
+#endif
 #if WIRELESS
         /* IEEE 802.11 wireless interfaces */
         case IFM_IEEE80211:
@@ -200,14 +202,14 @@ int get_if_speed (char *ifstring)
                 case IFM_IEEE80211_DS11:
                     speed = 11 * 1000;
                     break;
-#if WIRELESS && defined(__FreeBSD__) && (__FreeBSD_version >= 460102)
+#if WIRELESS && ((defined(__FreeBSD__) && (__FreeBSD_version >= 460102)) || defined(__DragonFly__))
                 case IFM_IEEE80211_DS22:
                     speed = 22 * 1000;
                     break;
 #endif
 #if WIRELESS && \
 	(defined(__FreeBSD__) && (__FreeBSD_version >= 500111)) || \
-	(defined(__NetBSD__) && (__NetBSD_Version_ > 106020000))
+	(defined(__NetBSD__) && (__NetBSD_Version_ > 106020000)) || defined(__DragonFly__)
                 case IFM_IEEE80211_OFDM6:
                     speed = 6 * 1000;
                     break;
