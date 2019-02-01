/construction/graphics/luxrender14/luxrender-lux-dfd211d6faa0/qtgui/mainwindow.hxx: In copy constructor 'QMRUListModel<T>::QMRUListModel(const QMRUListModel<T>&)':
/construction/graphics/luxrender14/luxrender-lux-dfd211d6faa0/qtgui/mainwindow.hxx:138:87: error: no matching function for call to 'QMRUListModel<T>::parent() const'
   : maxCount(other.maxCount), mruList(other.mruList), QAbstractListModel(other.parent()) { }

Appears to be not needed.

--- qtgui/mainwindow.hxx.orig	2015-01-20 23:10:10.000000000 +0000
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
