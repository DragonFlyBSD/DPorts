--- src/backend/core/datatypes/Double2DateTimeFilter.h.orig	2009-04-26 19:22:36.000000000 +0000
+++ src/backend/core/datatypes/Double2DateTimeFilter.h
@@ -36,7 +36,7 @@
 #include <QTime>
 #include "lib/XmlStreamReader.h"
 #include <QXmlStreamWriter>
-#include <math.h>
+#include <cmath>
 
 //! Conversion filter double -> QDateTime, interpreting the input numbers as (fractional) Julian days.
 class Double2DateTimeFilter : public AbstractSimpleFilter
@@ -47,13 +47,13 @@ class Double2DateTimeFilter : public Abs
 		virtual QDate dateAt(int row) const {
 			if (!m_inputs.value(0)) return QDate();
 			double inputValue = m_inputs.value(0)->valueAt(row);
-			if (isnan(inputValue)) return QDate();
+			if (std::isnan(inputValue)) return QDate();
 			return QDate::fromJulianDay(qRound(inputValue));
 		}
 		virtual QTime timeAt(int row) const {
 			if (!m_inputs.value(0)) return QTime();
 			double inputValue = m_inputs.value(0)->valueAt(row);
-			if (isnan(inputValue)) return QTime();
+			if (std::isnan(inputValue)) return QTime();
 			// we only want the digits behind the dot and 
 			// convert them from fraction of day to milliseconds
 			return QTime(12,0,0,0).addMSecs(int( (inputValue - int(inputValue)) * 86400000.0 ));
