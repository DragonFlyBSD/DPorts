/*
 * $FreeBSD: devel/qmake/files/qconfig.cpp 300896 2012-07-14 13:54:48Z beat $
 * Hand-crafted...
 * The default prefix (/ usr / local) is dynamicly replaced
 * at configure time.
 */
const char *qInstallPath()             { return "/usr/local"; }
const char *qInstallPathDocs()         { return "/usr/local/share/doc/qt"; }
const char *qInstallPathHeaders()      { return "/usr/local/include"; }
const char *qInstallPathLibs()         { return "/usr/local/lib"; }
const char *qInstallPathBins()         { return "/usr/local/bin"; }
const char *qInstallPathPlugins()      { return "/usr/local/plugins"; }
const char *qInstallPathData()         { return "/usr/local/share/qt"; }
const char *qInstallPathTranslations() { return "/usr/local/translations"; }
const char *qInstallPathSysconf()      { return "/usr/local/etc"; }
