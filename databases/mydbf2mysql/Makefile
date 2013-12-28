# Created by: Andrey Polyakov <andrey.polyakov@unix.net>
# $FreeBSD: databases/mydbf2mysql/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	mydbf2mysql
PORTVERSION=	0.8.4.5
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	SF/mydbf2mysql/mydbf2mysql/${PORTVERSION}/
DISTNAME=	MyDBF2MySQL-${PORTVERSION}

MAINTAINER=	andrey.polyakov@unix.net
COMMENT=	Flexible tool for DBF import into MySQL

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=1.2.2:${PORTSDIR}/databases/py-MySQLdb
RUN_DEPENDS+=	ydbf=0.0.1:${PORTSDIR}/devel/py-ydbf

PLIST_SUB+=	PYTHON_VER=${PYTHON_VER}
USE_PYTHON=	2.6+
USE_PYDISTUTILS=yes
USE_BZIP2=	yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	MyDBF2MySQL
PYDISTUTILS_PKGVERSION=	${PORTVERSION}

WRKSRC=		${WRKDIR}/${PORTNAME}/${PORTNAME}/dist/${DISTNAME}/

.include <bsd.port.mk>
