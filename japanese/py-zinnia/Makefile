# Created by: Timothy Beyer <beyert@cs.ucr.edu>
# $FreeBSD: japanese/py-zinnia/Makefile 341369 2014-01-27 10:49:50Z danfe $

PORTNAME=	zinnia
PORTVERSION=	0.06
CATEGORIES=	japanese python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Python interface for Zinnia

LIB_DEPENDS=	libzinnia.so:${PORTSDIR}/japanese/zinnia
RUN_DEPENDS=	zinnia:${PORTSDIR}/japanese/zinnia

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	${PORTNAME}_python
PYDISTUTILS_PKGVERSION=	0.0.0

LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_ENV:=	${CONFIGURE_ENV}

post-extract:
	${CP} -a ${WRKSRC}/python/* ${WRKSRC}

.include <bsd.port.mk>
