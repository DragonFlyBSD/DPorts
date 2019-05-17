--- src/3rdparty/chromium/net/base/address_tracker_linux.h.intermediate	2019-05-06 09:08:08.000000000 +0000
+++ src/3rdparty/chromium/net/base/address_tracker_linux.h
@@ -6,7 +6,7 @@
 #define NET_BASE_ADDRESS_TRACKER_LINUX_H_
 
 #include <sys/socket.h>  // Needed to include netlink.
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 // Mask superfluous definition of |struct net|. This is fixed in Linux 2.6.38.
 #define net net_kernel
 #include <linux/rtnetlink.h>
@@ -36,7 +36,7 @@ namespace internal {
 class NET_EXPORT_PRIVATE AddressTrackerLinux
     : public base::MessagePumpForIO::FdWatcher {
  public:
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   typedef std::map<IPAddress, struct ifaddrmsg> AddressMap;
 
 #else
