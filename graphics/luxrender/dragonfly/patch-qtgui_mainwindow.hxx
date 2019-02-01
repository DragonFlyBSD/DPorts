Appears not to be needed.

--- qtgui/mainwindow.hxx.orig	2016-05-09 21:21:17.000000000 +0000
+++ qtgui/mainwindow.hxx
@@ -134,8 +134,10 @@ class QMRUListModel : public QAbstractLi
 public:
 	QMRUListModel() : QAbstractListModel(), maxCount(0) { }
 	QMRUListModel(int count, QObject *parent = 0) : QAbstractListModel(parent), maxCount(count)  { }
+#if 0
 	QMRUListModel(const QMRUListModel<T> &other) 
 		: maxCount(other.maxCount), mruList(other.mruList), QAbstractListModel(other.parent()) { }
+#endif
 
 	int count() const {
 		return maxCount;
