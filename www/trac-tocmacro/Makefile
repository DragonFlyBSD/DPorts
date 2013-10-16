# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-tocmacro/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	tocmacro
PORTVERSION=	11.0.0.3
PORTREVISION=	2
CATEGORIES=	www devel python
MASTER_SITES=	http://people.freebsd.org/~mm/trac/
PKGNAMEPREFIX=	trac-

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Table of contents macro

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TracTocMacro
PLIST_SUB+=	PORTVERSION=${PORTVERSION} PYTHONVERSION=${PYTHON_VER}
PYDISTUTILS_NOEGGINFO=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
