--- src/tools/projection/pj_proj4/crs_transform_grid.cpp.orig	2020-04-29 19:30:03 UTC
+++ src/tools/projection/pj_proj4/crs_transform_grid.cpp
@@ -369,7 +369,11 @@ bool CCRS_Transform_Grid::Transform(CSG_
 			double	z, ySource, xSource	= pTarget->Get_XMin() + x * pTarget->Get_Cellsize();
 
 			//---------------------------------------------------------
+			#ifdef _OPENMP
 			if( !m_Projector[omp_get_thread_num()].Get_Projection(xSource, ySource = yTarget) )
+			#else
+			if( !m_Projector.Get_Projection(xSource, ySource = yTarget) )
+			#endif
 			{
 				continue;
 			}
