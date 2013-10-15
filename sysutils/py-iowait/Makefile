# Created by: Olivier Duchateau <olivierd@FreeBSD.org>
# $FreeBSD: sysutils/py-iowait/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	iowait
PORTVERSION=	0.2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Python module for I/O completion events

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
