--- src/disk_label.cpp.orig	2024-01-14 08:26:01 UTC
+++ src/disk_label.cpp
@@ -24,7 +24,13 @@
 #include <sys/disklabel.h>
 
 #include <fcntl.h>
+#ifndef __DragonFly__
 #include <sys/dkio.h>
+#else
+#include <sys/dtype.h>
+#include <sys/disklabel64.h>
+#include <fstab.h>
+#endif
 #include <sys/ioctl.h>
 #include <unistd.h>
 #include <util.h>
@@ -41,18 +47,34 @@ DiskLabel::DiskLabel(const QString& dev)
 
 void DiskLabel::analyseDev(const QString& dev)
 {
-    struct disklabel lab;
     char* specname;
+
+#ifdef __DragonFly__
+    struct disklabel64 lab;
+
+    specname = getdevpath(dev.toLocal8Bit().data(), 0);
+    int f = open(specname, O_RDONLY);
+#else
+    struct disklabel lab;
+
     int f = opendev(dev.toLocal8Bit().data(), O_RDONLY, OPENDEV_PART, &specname);
+#endif
 
-    if (ioctl(f, DIOCGDINFO, &lab) == -1) {
+    if (ioctl(f, DIOCGDINFO64, &lab) == -1) {
         close(f);
         return;
     }
 
+#ifdef __DragonFly__
+    const u_int64_t blockSize = lab.d_align;
+#else
     const u_int64_t blockSize = DL_GETDSIZE(&lab);
+#endif
 
     createDrive(dev);
+
+
+#ifndef __DragonFly__
     const QUuid duid(0x0,
                      0x0,
                      0x0,
@@ -64,11 +86,27 @@ void DiskLabel::analyseDev(const QString
                      lab.d_uid[5],
                      lab.d_uid[6],
                      lab.d_uid[7]);
+#else
+    const QUuid duid(
+        lab.d_stor_uuid.time_low, 
+        lab.d_stor_uuid.time_mid, 
+        lab.d_stor_uuid.time_hi_and_version,
+        lab.d_stor_uuid.clock_seq_hi_and_reserved, 
+        lab.d_stor_uuid.clock_seq_low,
+        lab.d_stor_uuid.node[0], 
+        lab.d_stor_uuid.node[1], 
+        lab.d_stor_uuid.node[2], 
+        lab.d_stor_uuid.node[3], 
+        lab.d_stor_uuid.node[4], 
+        lab.d_stor_uuid.node[5]
+    );
+#endif
     m_drive->setId(QString(specname).replace("/dev/", "dev_"));
     m_drive->setDuid(duid);
-    m_drive->setVendor(QString(lab.d_packname));
+    m_drive->setVendor(QString(reinterpret_cast<const char*>(lab.d_packname)));
     m_drive->setSize(blockSize);
 
+#ifndef __DragonFly__
     const QString sduid = QString::asprintf("%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx",
                                             lab.d_uid[0],
                                             lab.d_uid[1],
@@ -78,21 +116,54 @@ void DiskLabel::analyseDev(const QString
                                             lab.d_uid[5],
                                             lab.d_uid[6],
                                             lab.d_uid[7]);
+#else
+    // From ChatGPT, may $deity help us
+    QString sduid = QString::asprintf(
+        "%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx",
+        lab.d_stor_uuid.time_low >> 24,
+        lab.d_stor_uuid.time_low >> 16,
+        lab.d_stor_uuid.time_low >> 8,
+        lab.d_stor_uuid.time_low,
+        lab.d_stor_uuid.time_mid >> 8,
+        lab.d_stor_uuid.time_mid,
+        lab.d_stor_uuid.time_hi_and_version >> 8,
+        lab.d_stor_uuid.time_hi_and_version
+    );
+#endif
 
+#ifndef __DragonFly__
     struct disklabel::partition* pp = nullptr;
+#else
+    struct disklabel64::partition64* pp = nullptr;
+#endif
 
     for (int i = 0; i < lab.d_npartitions; i++) {
         pp = &lab.d_partitions[i];
+#ifndef __DragonFly__
         if (DL_GETPSIZE(pp) > 0) {
+#else
+        if (pp->p_bsize > 0) {
+#endif
             const QString p = QChar('a' + i);
             if (p != QStringLiteral("c")) {
                 if (isValidFileSysetem(pp->p_fstype)) {
                     auto block = createBlock(
+#ifndef __DragonFly__
                         getDeviceName() + p, QString(fstypesnames[pp->p_fstype]), blockSize);
+#else
+                        getDeviceName() + p, QString(fstype_to_vfsname[pp->p_fstype]), blockSize);
+#endif
+
                     block->setId(sduid + p);
-                    block->setIdLabel(lab.d_packname);
+                    block->setIdLabel(QString(reinterpret_cast<const char*>(lab.d_packname)));
+#ifndef __DragonFly__
                     auto fs = createFilesystem(block, QString(fstypesnames[pp->p_fstype]));
                     auto partition = createPartition(p, DL_GETPSIZE(pp));
+#else
+                    auto fs = createFilesystem(block, QString(fstype_to_vfsname[pp->p_fstype]));
+                    auto partition = createPartition(p, pp->p_bsize);
+#endif
+
 
                     partition->addFilesystem(fs);
                     block->addPartition(partition);
@@ -128,21 +199,26 @@ bool DiskLabel::isValidFileSysetem(u_int
         return true;
 
     case FS_BOOT:
+#ifndef __DragonFly__
     case FS_ADOS:
     case FS_HFS:
     case FS_ADFS:
+#endif
         return false;
 
+#ifndef __DragonFly__
     case FS_EXT2FS:
         return true;
+#endif
 
     case FS_CCD:
     case FS_RAID:
         return false;
 
+#ifndef __DragonFly__
     case FS_NTFS:
         return true;
-
+#endif
     case FS_UDF:
         return false;
     };
