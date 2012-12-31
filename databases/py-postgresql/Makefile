# $FreeBSD: ports/databases/py-postgresql/Makefile,v 1.7 2012/11/17 05:55:22 svnexp Exp $

PORTNAME=	postgresql
PORTVERSION=	1.1.0
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP \
		http://python.projects.postgresql.org/files/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py-${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	postgresql

MAINTAINER=	c.kworr@gmail.com
COMMENT=	Python 3 compatible PostgreSQL database driver and tools

LICENSE=	BSD

USE_ZIP=	yes
USE_PGSQL=	yes
USE_PYTHON=	3.1+
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	py_${PORTNAME}

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${FILESDIR}/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
