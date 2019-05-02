--- src/modules/avformat/filter_avfilter.c.orig	2019-03-30 20:59:21 UTC
+++ src/modules/avformat/filter_avfilter.c
@@ -377,7 +377,7 @@ static void init_image_filtergraph( mlt_
 	set_avfilter_options( filter );
 
 	if ( !strcmp( "lut3d", pdata->avfilter->name ) ) {
-#if defined(__GLIBC__) || defined(__APPLE__) || (__FreeBSD__)
+#if defined(__GLIBC__) || defined(__APPLE__) || (__FreeBSD__) || defined(__DragonFly__)
 		// LUT data files use period for the decimal point regardless of LC_NUMERIC.
 		locale_t posix_locale = newlocale( LC_NUMERIC_MASK, "POSIX", NULL );
 		// Get the current locale and switch to POSIX local.
