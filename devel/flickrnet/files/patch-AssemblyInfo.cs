
$FreeBSD: head/devel/flickrnet/files/patch-AssemblyInfo.cs 340725 2014-01-22 17:40:44Z mat $

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
