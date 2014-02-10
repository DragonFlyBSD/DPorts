# Created by: Douglas Thrift <douglas@douglasthrift.net>
# $FreeBSD: head/converters/py-unidecode/Makefile 331473 2013-10-24 10:26:07Z koobs $

PORTNAME=	unidecode
PORTVERSION=	0.04.14
CATEGORIES=	converters python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Unidecode-${PORTVERSION}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	ASCII transliterations of Unicode text

LICENSE=	GPLv2

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	Unidecode

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
