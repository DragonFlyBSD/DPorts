--- src/backend/core/datatypes/Double2DayOfWeekFilter.h.orig	2009-04-26 19:22:36.000000000 +0000
+++ src/backend/core/datatypes/Double2DayOfWeekFilter.h
@@ -34,7 +34,7 @@
 #include <QDateTime>
 #include "lib/XmlStreamReader.h"
 #include <QXmlStreamWriter>
-#include <math.h>
+#include <cmath>
 
 //! Conversion filter double -> QDateTime, interpreting the input numbers as days of the week (1 = Monday).
 class Double2DayOfWeekFilter : public AbstractSimpleFilter
@@ -44,7 +44,7 @@ class Double2DayOfWeekFilter : public Ab
 		virtual QDate dateAt(int row) const {
 			if (!m_inputs.value(0)) return QDate();
 			double inputValue = m_inputs.value(0)->valueAt(row);
-			if (isnan(inputValue)) return QDate();
+			if (std::isnan(inputValue)) return QDate();
 			// Don't use Julian days here since support for years < 1 is bad
 			// Use 1900-01-01 instead (a Monday)
 			return QDate(1900,1,1).addDays(qRound(inputValue - 1.0));
