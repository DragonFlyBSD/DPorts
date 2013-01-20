# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/math/py-gmpy/Makefile,v 1.10 2013/01/13 04:59:29 svnexp Exp $

PORTNAME=	gmpy
PORTVERSION=	1.16
CATEGORIES=	math python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python Extension that Wraps the GMP Library

LIB_DEPENDS=	gmp.10:${PORTSDIR}/math/gmp

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/gmpy.so

post-extract:
	${REINPLACE_CMD} -e 's#/usr/local#${LOCALBASE}#g' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
