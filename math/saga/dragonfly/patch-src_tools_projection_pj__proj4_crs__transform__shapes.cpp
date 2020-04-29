--- src/tools/projection/pj_proj4/crs_transform_shapes.cpp.orig	2020-04-29 19:56:39 UTC
+++ src/tools/projection/pj_proj4/crs_transform_shapes.cpp
@@ -312,7 +312,11 @@ bool CCRS_Transform_Shapes::Transform(CS
 		#pragma omp parallel for
 		for(int i=0; i<pShapes->Get_Count(); i++)
 		{
-			int	Thread	= omp_get_thread_num();
+			#ifdef _OPENMP
+			int     Thread  = omp_get_thread_num();
+			#else
+			int     Thread = 0;
+			#endif
 
 			if( !Thread )
 			{
