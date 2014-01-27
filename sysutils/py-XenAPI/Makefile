# Created by: Evan Sarmiento <bsdports@wayfair.com>
# $FreeBSD: sysutils/py-XenAPI/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	XenAPI
PORTVERSION=	1.0
CATEGORIES=	sysutils python
MASTER_SITES=	http://community.citrix.com/download/attachments/38633496/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.py
EXTRACT_ONLY=

MAINTAINER=	bsdports@wayfair.com
COMMENT=	Xen API Library for Python

USE_PYTHON=	2
WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/XenAPI.py \
		%%PYTHON_SITELIBDIR%%/XenAPI.pyc \
		%%PYTHON_SITELIBDIR%%/XenAPI.pyo

NO_STAGE=	yes
post-patch:
	${MKDIR} ${WRKSRC}
	${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}

do-build:
	@${PYTHON_CMD} -m py_compile ${WRKSRC}/${DISTFILES}
	@${PYTHON_CMD} -O -m py_compile ${WRKSRC}/${DISTFILES}

do-install:
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.py* ${PYTHON_SITELIBDIR}

.include <bsd.port.mk>
