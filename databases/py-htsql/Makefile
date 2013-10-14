# Created by: jpaetzel
# $FreeBSD: databases/py-htsql/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	htsql
PORTVERSION=	2.3.3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Database Query Language (Core & SQLite Backend)

USE_PYTHON=		2.6-2.7
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME:tu}

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}yaml>0:${PORTSDIR}/devel/py-yaml \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:${PORTSDIR}/databases/py-sqlite3

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
