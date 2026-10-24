--- tools/winebuild/res32.c.orig	2025-11-06 09:54:15 UTC
+++ tools/winebuild/res32.c
@@ -44,8 +44,6 @@ struct resource
 {
     struct string_id type;
     struct string_id name;
-    const char      *input_name;
-    unsigned int     input_offset;
     const void      *data;
     unsigned int     data_size;
     unsigned int     data_offset;
@@ -158,6 +156,28 @@ static void put_string( const struct string_id *str )
     }
 }
 
+static void dump_res_data( const struct resource *res )
+{
+    unsigned int i = 0;
+    unsigned int size = (res->data_size + 3) & ~3;
+
+    if (!size) return;
+
+    input_buffer = res->data;
+    input_buffer_pos  = 0;
+    input_buffer_size = size;
+
+    output( "\t.long " );
+    while (size > 4)
+    {
+        if ((i++ % 16) == 15) output( "0x%08x\n\t.long ", get_dword() );
+        else output( "0x%08x,", get_dword() );
+        size -= 4;
+    }
+    output( "0x%08x\n", get_dword() );
+    assert( input_buffer_pos == input_buffer_size );
+}
+
 /* check the file header */
 /* all values must be zero except header size */
 static int check_header(void)
@@ -179,7 +199,7 @@ static int check_header(void)
 }
 
 /* load the next resource from the current file */
-static void load_next_resource( DLLSPEC *spec, const char *name )
+static void load_next_resource( DLLSPEC *spec )
 {
     unsigned int hdr_size;
     struct resource *res = add_resource( spec );
@@ -189,9 +209,6 @@ static void load_next_resource( DLLSPEC *spec, const c
     if (hdr_size & 3) fatal_error( "%s header size not aligned\n", input_buffer_filename );
     if (hdr_size < 32) fatal_error( "%s invalid header size %u\n", input_buffer_filename, hdr_size );
 
-    res->input_name = xstrdup( name );
-    res->input_offset = input_buffer_pos - 2*sizeof(unsigned int) + hdr_size;
-
     res->data = input_buffer + input_buffer_pos - 2*sizeof(unsigned int) + hdr_size;
     if ((const unsigned char *)res->data < input_buffer ||
         (const unsigned char *)res->data >= input_buffer + input_buffer_size)
@@ -220,7 +237,7 @@ int load_res32_file( const char *name, DLLSPEC *spec )
 
     if ((ret = check_header()))
     {
-        while (input_buffer_pos < input_buffer_size) load_next_resource( spec, name );
+        while (input_buffer_pos < input_buffer_size) load_next_resource( spec );
     }
     return ret;
 }
@@ -473,7 +490,7 @@ void output_resources( DLLSPEC *spec )
     {
         output( "\n\t.balign 4\n" );
         output( ".L__wine_spec_res_%d:\n", i );
-        output( "\t.incbin \"%s\",%d,%d\n", res->input_name, res->input_offset, res->data_size );
+        dump_res_data( res );
     }
 
     if (!is_pe())
