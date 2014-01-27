# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-macropost/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	macropost
PORTVERSION=	0.2
PORTREVISION=	4
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Allows Macros to use POST in forms

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
