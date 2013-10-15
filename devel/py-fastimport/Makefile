# Created by: Carlo Strub
# $FreeBSD: devel/py-fastimport/Makefile 329496 2013-10-05 19:04:33Z cs $

PORTNAME=	fastimport
PORTVERSION=	0.9.2
CATEGORIES=	devel
MASTER_SITES=	https://launchpadlibrarian.net/99879696/ \
		http://www.c-s.li/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fastimport parser in Python

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/python-${PORTNAME}-${PORTVERSION}
USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	fastimport

NO_STAGE=	yes
.include <bsd.port.mk>
