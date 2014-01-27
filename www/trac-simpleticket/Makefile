# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-simpleticket/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	simpleticket
PORTVERSION=	1.1.3
PORTREVISION=	6
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simplified Ticket Entry

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
