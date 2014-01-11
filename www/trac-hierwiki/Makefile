# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-hierwiki/Makefile 337578 2013-12-26 17:54:58Z wg $

PORTNAME=	hierwiki
PORTVERSION=	1.0
PORTREVISION=	6
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dealing with the trac wiki as a hierarchy

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
