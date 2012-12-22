# Created by: jpaetzel
# $FreeBSD: ports/databases/py-htsql/Makefile,v 1.12 2012/11/17 05:55:22 svnexp Exp $

PORTNAME=	htsql
PORTVERSION=	2.3.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	Python HTSQL

USE_PYTHON=		2.6-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME:tu}

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}yaml>0:${PORTSDIR}/devel/py-yaml \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:${PORTSDIR}/databases/py-sqlite3

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
