# $FreeBSD: ports/devel/py-fam/files/setup.py,v 1.2 2012/11/17 05:56:46 svnexp Exp $
from distutils.core import setup, Extension
import os
LOCALBASE = os.environ.get('LOCALBASE', '/usr/local')
setup(name = "fam", ext_modules = [
	Extension("_fam", ["_fam.c"],
		include_dirs=[LOCALBASE + '/include'],
		libraries=['fam'], library_dirs=[LOCALBASE + '/lib'],
	)]
)
