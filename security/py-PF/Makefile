# Created by: Sofian Brabez <sbrabez@gmail.com>
# $FreeBSD: security/py-PF/Makefile 327769 2013-09-20 22:55:24Z bapt $

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

NO_STAGE=	yes
post-install:
.if !defined(BATCH)
	@${CAT} ${PKGMESSAGE}
.endif

.include <bsd.port.mk>
