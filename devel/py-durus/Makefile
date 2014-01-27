# Created by: Dryice Liu <dryice@dryice.name>
# $FreeBSD: devel/py-durus/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	durus
PORTVERSION=	3.9
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	http://www.mems-exchange.org/software/durus/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Durus-${PORTVERSION}

MAINTAINER=	wenheping@gmail.com
COMMENT=	A persistent object storage system for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes
PYDISTUTILS_PKGNAME=	Durus

NO_STAGE=	yes
.include <bsd.port.pre.mk>

post-install:
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
.for docfile in ACKS.txt CHANGES.txt INSTALL.txt LICENSE.txt README.txt doc/FAQ.txt
	@ ${INSTALL_DATA} ${WRKSRC}/${docfile} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.post.mk>
