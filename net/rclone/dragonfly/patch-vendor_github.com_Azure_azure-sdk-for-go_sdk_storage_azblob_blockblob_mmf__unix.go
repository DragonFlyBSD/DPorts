--- vendor/github.com/Azure/azure-sdk-for-go/sdk/storage/azblob/blockblob/mmf_unix.go.orig	2023-10-08 12:41:14 UTC
+++ vendor/github.com/Azure/azure-sdk-for-go/sdk/storage/azblob/blockblob/mmf_unix.go
@@ -1,6 +1,6 @@
-//go:build go1.18 && (linux || darwin || freebsd || openbsd || netbsd || solaris)
+//go:build go1.18 && (linux || darwin || freebsd || dragonfly || openbsd || netbsd || solaris)
 // +build go1.18
-// +build linux darwin freebsd openbsd netbsd solaris
+// +build linux darwin freebsd dragonfly openbsd netbsd solaris
 
 // Copyright (c) Microsoft Corporation. All rights reserved.
 // Licensed under the MIT License. See License.txt in the project root for license information.
