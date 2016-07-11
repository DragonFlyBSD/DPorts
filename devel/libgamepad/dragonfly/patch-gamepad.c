--- gamepad.c.orig	2012-12-19 18:35:39.000000000 +0200
+++ gamepad.c
@@ -28,7 +28,7 @@ gamepad_t   *gamepad_open(const char *de
     
     switch(interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    gp->usbhid = gamepad_usbhid_open(device,io_flags);
 	    if ( gp->usbhid == NULL )
@@ -69,7 +69,7 @@ int     gamepad_read(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_read(gp->usbhid);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -91,7 +91,7 @@ int     gamepad_x(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_x(gp->usbhid);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -113,7 +113,7 @@ int     gamepad_y(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_y(gp->usbhid);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -135,7 +135,7 @@ int     gamepad_z(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_z(gp->usbhid);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -157,7 +157,7 @@ int     gamepad_rz(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_rz(gp->usbhid);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -179,7 +179,7 @@ int     gamepad_hat_switch(gamepad_t *gp
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_hat_switch(gp->usbhid);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -202,7 +202,7 @@ int     gamepad_button(gamepad_t *gp,int
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_button(gp->usbhid,button);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -224,7 +224,7 @@ int     gamepad_num_buttons(gamepad_t *g
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return gamepad_usbhid_num_buttons(gp->usbhid);
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -245,7 +245,7 @@ void    gamepad_close(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    gamepad_usbhid_close(gp->usbhid);
 	    break;
@@ -282,7 +282,7 @@ gamepad_interface_t gamepad_check_interf
 	 ((device[0] == ':') || (device[4] == ':')) )
 	return GAMEPAD_INTERFACE_LIBHID;
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
     if ( memcmp(device,"/dev",4) == 0 )
     {
 	if ( memcmp(device+5,"uhid",4) == 0 )
@@ -303,7 +303,7 @@ int     gamepad_max_x(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return 255;
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -325,7 +325,7 @@ int     gamepad_max_y(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return 255;
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -351,7 +351,7 @@ int     gamepad_max_z(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return 255;
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -373,7 +373,7 @@ int     gamepad_max_rz(gamepad_t *gp)
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    return 255;
 	case    GAMEPAD_INTERFACE_ANALOG:
@@ -395,7 +395,7 @@ void    gamepad_set_nonblock(gamepad_t *
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    gamepad_usbhid_set_nonblock(gp->usbhid);
 	    break;
@@ -418,7 +418,7 @@ void    gamepad_unset_nonblock(gamepad_t
 {
     switch(gp->interface)
     {
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	case    GAMEPAD_INTERFACE_USBHID:
 	    gamepad_usbhid_unset_nonblock(gp->usbhid);
 	    break;
