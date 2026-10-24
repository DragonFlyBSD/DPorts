--- src/backend/core/datatypes/Double2StringFilter.h.orig	2009-04-26 19:22:36.000000000 +0000
+++ src/backend/core/datatypes/Double2StringFilter.h
@@ -32,7 +32,7 @@
 #include "../AbstractSimpleFilter.h"
 #include <QLocale>
 #include <QChar>
-#include <math.h>
+#include <cmath>
 
 //! Locale-aware conversion filter double -> QString.
 class Double2StringFilter : public AbstractSimpleFilter
@@ -77,7 +77,7 @@ class Double2StringFilter : public Abstr
 			if (!m_inputs.value(0)) return QString();
 			if (m_inputs.value(0)->rowCount() <= row) return QString();
 			double inputValue = m_inputs.value(0)->valueAt(row);
-			if (isnan(inputValue)) return QString();
+			if (std::isnan(inputValue)) return QString();
 			return QLocale().toString(inputValue, m_format, m_digits);
 		}
 
