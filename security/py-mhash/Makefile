# ex:ts=8
# Ports collection makefile for:	py-mhash
# Date created:			Feb 10, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/security/py-mhash/Makefile,v 1.12 2012/11/17 06:01:16 svnexp Exp $
#

PORTNAME=	mhash
PORTVERSION=	1.4
CATEGORIES=	security python
MASTER_SITES=	SF/${PORTNAME}/OldFiles
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-mhash-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python mhash module

LIB_DEPENDS=	mhash:${PORTSDIR}/security/mhash

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/mhash.so
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	python-mhash

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

test: install
	${PYTHON_CMD} ${WRKSRC}/test.py

.include <bsd.port.mk>
