
$FreeBSD: graphics/py-graph-dot/files/patch-setup.py 340725 2014-01-22 17:40:44Z mat $

--- setup.py.orig
+++ setup.py
@@ -20,7 +15,6 @@
         version = appversion,
         namespace_packages = ["pygraph"],
         packages = ["pygraph"] + [ os.path.join("pygraph", a) for a in find_packages("pygraph") ],
-        install_requires = [ 'python-graph-core==%s' % appversion, 'pydot' ],
         author = "Pedro Matiello",
         author_email = "pmatiello@gmail.com",
         description = "DOT support for python-graph",
