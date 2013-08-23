# Created by: wen@FreeBSD.org
# $FreeBSD: databases/pymongo/Makefile 325073 2013-08-20 20:01:03Z wg $

PORTNAME=	pymongo
PORTVERSION=	2.6
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Python driver for MongoDB

LICENSE=	AL2

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes
PYDISTUTILS_NOEGGINFO=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "ia64" || ${ARCH} == "powerpc" || ${ARCH} == "sparc64"
BROKEN=		Does not install on ia64, powerpc, or sparc64
.endif

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
