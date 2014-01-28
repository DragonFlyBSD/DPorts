# Created by: Lewis Thompson (purple@lewiz.net)
# $FreeBSD: comms/py-lirc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	lirc
PORTVERSION=	0.0.5
PORTREVISION=	3
CATEGORIES=	comms python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pylirc-${PORTVERSION}

MAINTAINER=	lewiz@compsoc.man.ac.uk
COMMENT=	Lirc support library for Python

LIB_DEPENDS=	liblirc_client.so:${PORTSDIR}/comms/lirc

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/pylircmodule.so

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_PYTHON_PREFIX=	yes
PYDISTUTILS_PKGNAME=	pylirc

NO_STAGE=	yes
.include <bsd.port.mk>
