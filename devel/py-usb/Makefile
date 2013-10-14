# Created by: R.Mahmatkhanov <R.Mahmatkhanov@SKYLINK.ru>
# $FreeBSD: devel/py-usb/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	usb
PORTVERSION=	0.4.3
CATEGORIES=	devel python
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	py${PORTNAME}/PyUSB%200.x/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python wrapper around libusb

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	py${PORTNAME}

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MEXAMPLES}
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/samples/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
