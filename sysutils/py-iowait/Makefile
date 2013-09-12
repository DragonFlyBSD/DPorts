# Created by: Olivier Duchateau <olivierd@FreeBSD.org>
# $FreeBSD: sysutils/py-iowait/Makefile 326988 2013-09-11 15:21:32Z olivierd $

PORTNAME=	iowait
PORTVERSION=	0.2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Python module for I/O completion events

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
