# New ports collection makefile for:	py-whisper
# Date created:		2011-06-20
# Whom:			Steven Kreuzer <skreuzer@FreeBSD.org>
#
# $FreeBSD: ports/databases/py-whisper/Makefile,v 1.5 2012/11/17 05:55:23 svnexp Exp $
#

PORTNAME=	whisper
PORTVERSION=	0.9.10
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP \
		https://github.com/downloads/graphite-project/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Fixed-size database, similar in design to RRD

FETCH_ARGS=	-pRr

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
