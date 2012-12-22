# New ports collection makefile for:	py-PF
# Date created:		2009-02-07
# Whom:			Sofian Brabez <sbrabez@gmail.com>
#
# $FreeBSD: ports/security/py-PF/Makefile,v 1.10 2012/11/17 06:01:16 svnexp Exp $
#

PORTNAME=	PF
PORTVERSION=	0.0.6
CATEGORIES=	security python
MASTER_SITES=	SF/py-${PORTNAME:tl}/py-${PORTNAME:tl}/${DISTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PYTHON_PKGNAMEPREFIX:C/[0-9]+//}${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	A pure-Python module for managing OpenBSD Packet Filter

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	${PYTHON_PKGNAMEPREFIX:C/[0-9]+//}_${PORTNAME}

SUB_FILES=	pkg-message

post-install:
.if !defined(BATCH)
	@${CAT} ${PKGMESSAGE}
.endif

.include <bsd.port.mk>
