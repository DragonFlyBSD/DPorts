--- src/backend/core/datatypes/Double2MonthFilter.h.orig	2013-12-06 20:45:37.690918000 +0000
+++ src/backend/core/datatypes/Double2MonthFilter.h
@@ -32,7 +32,7 @@
 
 #include "../AbstractSimpleFilter.h"
 #include <QDateTime>
-#include <math.h>
+#include <cmath>
 #include "backend/lib/XmlStreamReader.h"
 #include <QXmlStreamWriter>
 
@@ -50,7 +50,7 @@ class Double2MonthFilter : public Abstra
 		virtual QDateTime dateTimeAt(int row) const {
 			if (!m_inputs.value(0)) return QDateTime();
 			double inputValue = m_inputs.value(0)->valueAt(row);
-			if (isnan(inputValue)) return QDateTime();
+			if (std::isnan(inputValue)) return QDateTime();
 			// Don't use Julian days here since support for years < 1 is bad
 			// Use 1900-01-01 instead
 			QDate result_date = QDate(1900,1,1).addMonths(qRound(inputValue - 1.0));
