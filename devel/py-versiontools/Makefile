# $FreeBSD: devel/py-versiontools/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	versiontools
PORTVERSION=	1.9.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Smart replacement for plain tuple used in __version__

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
