# Created by: wen@FreeBSD.org
# $FreeBSD: databases/pymongo/Makefile 315175 2013-03-24 22:44:49Z wen $

PORTNAME=	pymongo
PORTVERSION=	2.5
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python driver for MongoDB

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes
PYDISTUTILS_NOEGGINFO=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "ia64" || ${ARCH} == "powerpc" || ${ARCH} == "sparc64"
BROKEN=		Does not install on ia64, powerpc, or sparc64
.endif

.include <bsd.port.post.mk>
