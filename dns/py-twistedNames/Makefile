# Created by: Neal Nelson <neal@nelson.name>
# $FreeBSD: dns/py-twistedNames/Makefile 326649 2013-09-07 16:15:35Z sunpoet $

PORTNAME=	twistedNames
PORTVERSION=	13.1.0
CATEGORIES=	dns devel python
MASTER_SITES=	http://twistedmatrix.com/Releases/Names/${PORTVERSION:R}/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TwistedNames-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	DNS protocol implementation with client and server

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}twistedCore>=${PORTVERSION}:${PORTSDIR}/devel/py-twistedCore
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=	yes
USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	${PORTNAME:S/twisted/Twisted_/}

.include <bsd.port.mk>
