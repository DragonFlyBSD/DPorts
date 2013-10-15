# $FreeBSD: devel/py-fam/files/setup.py 300896 2012-07-14 13:54:48Z beat $
from distutils.core import setup, Extension
import os
LOCALBASE = os.environ.get('LOCALBASE', '/usr/local')
setup(name = "fam", ext_modules = [
	Extension("_fam", ["_fam.c"],
		include_dirs=[LOCALBASE + '/include'],
		libraries=['fam'], library_dirs=[LOCALBASE + '/lib'],
	)]
)
