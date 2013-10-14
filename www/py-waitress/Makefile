# Created by: Olivier Duchateau
# $FreeBSD: www/py-waitress/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	waitress
PORTVERSION=	0.8.7
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Python WSGI server

LICENSE=	ZPL21

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

pre-patch:
	@${CP} ${FILESDIR}/MANIFEST.in ${WRKSRC}

.include <bsd.port.post.mk>
