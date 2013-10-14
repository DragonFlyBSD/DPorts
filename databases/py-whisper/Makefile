# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: databases/py-whisper/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	whisper
PORTVERSION=	0.9.12
CATEGORIES=	databases python
MASTER_SITES=	https://github.com/graphite-project/${PORTNAME}/archive/${PORTVERSION}.tar.gz?dummy=
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Fixed-size database, similar in design to RRD

FETCH_ARGS=	-o ${DISTNAME}${EXTRACT_SUFX}

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
