# Created by: nectar@FreeBSD.org
# $FreeBSD: databases/py-PyGreSQL/Makefile 315348 2013-03-27 04:52:07Z rm $

PORTNAME=	PyGreSQL
PORTVERSION=	4.1.1
PORTEPOCH=	1
CATEGORIES=	databases python
MASTER_SITES=	http://www.pygresql.org/files/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to PostgreSQL, both classic and DP-API 2.0

USE_PGSQL=	yes
USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${DOCSDIR}
.endif

.include <bsd.port.mk>
