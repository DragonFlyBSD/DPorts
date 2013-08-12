# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: graphics/py-gdal/Makefile 324401 2013-08-08 16:47:32Z sunpoet $

PORTNAME=	gdal
PORTVERSION=	1.9.2
CATEGORIES=	graphics python
MASTER_SITES=	http://download.osgeo.org/gdal/ \
		ftp://ftp.remotesensing.org/pub/gdal/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python binding for GDAL

LICENSE=	MIT

LIB_DEPENDS=	gdal:${PORTSDIR}/graphics/gdal

OPTIONS_DEFINE=	NUMPY
NUMPY_DESC=	Enable array support via NumPy

PYEASYINSTALL_ARCHDEP=	yes
PYDISTUTILS_PKGNAME=	${PORTNAME:tu}
USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
WRKSRC=		${WRKDIR}/${DISTNAME}/swig/python

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNUMPY}
BUILD_DEPENDS+=	${PKGNAMEPREFIX}numpy>=1.0.0:${PORTSDIR}/math/py-numpy
RUN_DEPENDS+=	${PKGNAMEPREFIX}numpy>=1.0.0:${PORTSDIR}/math/py-numpy
.endif

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/*.py ${PREFIX}/bin/

.include <bsd.port.mk>
