# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: devel/py-speaklater/Makefile 325627 2013-08-29 18:35:45Z olivierd $
#

PORTNAME=	speaklater
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Lazy string Python module for translations

LICENSE=	BSD

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
