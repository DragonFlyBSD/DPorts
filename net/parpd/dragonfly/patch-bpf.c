--- bpf.c.orig	2018-12-17 08:23:29 UTC
+++ bpf.c
@@ -36,7 +36,9 @@ static bool update_timeout(struct timeva
 
 bool bind_interface(int fd) {
    struct ifreq ifr;
+#ifdef BIOCGDIRECTION
    unsigned int direction = BPF_D_IN;
+#endif
 
    memset(&ifr, 0, sizeof(ifr));
    strncpy(ifr.ifr_name, global.interface.name, sizeof(ifr.ifr_name));
@@ -45,9 +47,11 @@ bool bind_interface(int fd) {
    }
    current_bpf_descriptor = fd;
 
+#ifdef BIOCGDIRECTION
    if(0 > ioctl(fd, BIOCGDIRECTION, &direction)) {
       return false;
    }
+#endif
 
    return update_timeout(&global.interface.wait_for_input);
 }
@@ -93,9 +97,11 @@ bool set_filter(int fd) {
    };
    struct bpf_program arp = { sizeof(arp_cmds)/sizeof(*arp_cmds), arp_cmds };
 
+#ifdef BIOCSETFNR
    if(0 > ioctl(fd, BIOCSETFNR, &arp)) {
       return false;
    }
+#endif
 
    return true;
 }
