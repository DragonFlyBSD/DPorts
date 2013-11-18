# Created by: Neal Nelson <neal@nelson.name>
# $FreeBSD: net-im/py-twistedWords/Makefile 333934 2013-11-15 20:54:04Z sunpoet $

PORTNAME=	twistedWords
PORTVERSION=	13.2.0
CATEGORIES=	net-im devel python
MASTER_SITES=	http://twistedmatrix.com/Releases/Words/${PORTVERSION:R}/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TwistedWords-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Twisted Words has more chat than you can handle

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}twistedCore>=${PORTVERSION}:${PORTSDIR}/devel/py-twistedCore
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=	yes
USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	${PORTNAME:S/twisted/Twisted_/}

NO_STAGE=	yes
.include <bsd.port.mk>
