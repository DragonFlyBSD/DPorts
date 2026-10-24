--- gcore/multidim/gdal_multidim.h.orig
+++ gcore/multidim/gdal_multidim.h
@@ -196,7 +196,7 @@
     std::vector<std::unique_ptr<GDALEDTComponent>> m_aoComponents{};
     size_t m_nSize = 0;
     size_t m_nMaxStringLength = 0;
-    std::unique_ptr<GDALRasterAttributeTable> m_poRAT{};
+    std::unique_ptr<GDALRasterAttributeTable> m_poRAT;
 };
 
 /* ******************************************************************** */
