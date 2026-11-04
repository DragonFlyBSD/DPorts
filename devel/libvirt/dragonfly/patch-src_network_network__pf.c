--- src/network/network_pf.c.orig	2026-10-01 09:02:52 UTC
+++ src/network/network_pf.c
@@ -135,8 +135,8 @@
                         virStrcpy(ifname, sdl->sdl_data, ifname_len + 1);
                         return ifname;
                     }
-                    sa = (struct sockaddr *)((char *)sa +
-                         ((sa->sa_len > 0) ? sa->sa_len : sizeof(struct sockaddr)));
+                    /* DragonFly pads each address to sizeof(long). */
+                    sa = (struct sockaddr *)((char *)sa + RT_ROUNDUP(sa->sa_len));
                 }
             }
         }
