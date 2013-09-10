# Created by: Olivier Duchateau
# $FreeBSD: www/py-waitress/Makefile 325615 2013-08-29 17:42:01Z olivierd $
#

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

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

pre-patch:
	@${CP} ${FILESDIR}/MANIFEST.in ${WRKSRC}

.include <bsd.port.post.mk>
