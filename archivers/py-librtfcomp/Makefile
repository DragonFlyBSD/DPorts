# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: archivers/py-librtfcomp/Makefile 334258 2013-11-18 19:53:38Z sunpoet $

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python bindings for library for handling compressed RTF documents

LICENSE=	LGPL21

BUILD_DEPENDS=	${LOCALBASE}/bin/pyrexc:${PORTSDIR}/devel/pyrex
LIB_DEPENDS=	librtfcomp.so:${PORTSDIR}/archivers/librtfcomp

USE_PYTHON=	yes

BUILD_WRKSRC=	${WRKSRC}/python
INSTALL_WRKSRC=	${WRKSRC}/python
PLIST=		${.CURDIR}/pkg-plist

MASTERDIR=	${.CURDIR}/../librtfcomp
SLAVEPORT=	py

.include "${MASTERDIR}/Makefile"
