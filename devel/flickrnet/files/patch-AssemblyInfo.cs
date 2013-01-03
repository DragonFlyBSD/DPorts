
$FreeBSD: ports/devel/flickrnet/files/patch-AssemblyInfo.cs,v 1.2 2012/11/17 05:55:43 svnexp Exp $

--- AssemblyInfo.cs.orig
+++ AssemblyInfo.cs
@@ -61,10 +61,10 @@
 [assembly: AssemblyKeyName("")]
 
 #if !WindowsCE
-[assembly: AssemblyKeyFile("..\\..\\FlickrNet.snk")]
+[assembly: AssemblyKeyFile("FlickrNet.snk")]
 [assembly: AllowPartiallyTrustedCallers()]
 [assembly: SecurityPermission(SecurityAction.RequestMinimum, Execution = true)]
 #endif
 
 [assembly: CLSCompliantAttribute(true)]
-[assembly: ComVisible(false)]
\ No newline at end of file
+[assembly: ComVisible(false)]
