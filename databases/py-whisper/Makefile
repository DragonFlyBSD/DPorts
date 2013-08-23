# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: databases/py-whisper/Makefile 325167 2013-08-21 20:58:33Z skreuzer $

PORTNAME=	whisper
PORTVERSION=	0.9.11
CATEGORIES=	databases python
MASTER_SITES=	https://github.com/graphite-project/${PORTNAME}/archive/${PORTVERSION}.tar.gz?dummy=
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Fixed-size database, similar in design to RRD

FETCH_ARGS=	-o ${DISTNAME}${EXTRACT_SUFX}

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
