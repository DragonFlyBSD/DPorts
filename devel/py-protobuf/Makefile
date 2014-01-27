# Created by: vanilla@
# $FreeBSD: devel/py-protobuf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	protobuf
PORTVERSION=	2.5.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Google protobuf Python Client Library

BUILD_DEPENDS=	protoc:${PORTSDIR}/devel/protobuf

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/python
PROJECTHOST=	protobuf
USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST= 	yes

pre-build:
	@${MKDIR} ${WRKSRC}/google/protobuf/compiler

.include <bsd.port.mk>
