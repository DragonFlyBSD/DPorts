# Created by: vanilla@
# $FreeBSD: devel/py-protobuf/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	protobuf
PORTVERSION=	2.5.0
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
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
pre-build:
	@${MKDIR} ${WRKSRC}/google/protobuf/compiler

.include <bsd.port.mk>
