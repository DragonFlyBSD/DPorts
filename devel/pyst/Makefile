# New ports collection makefile for:    pyst
# Date created:         06 Sep 2011
# Whom:                 Mikhail T. <m.tsatsenko@gmail.com>
#
# $FreeBSD: ports/devel/pyst/Makefile,v 1.3 2012/11/17 05:56:54 svnexp Exp $
#

PORTNAME=	pyst
PORTVERSION=	0.4.38
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/pyst/${PORTVERSION}

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	Python interface to allow Asterisk programming

LICENSE=	LGPL21 PSFL
LICENSE_COMB=	dual

USE_PYTHON=	2.5-2.7
USE_PYDISTUTILS=	yes

PORTDOCS=	README README.html ChangeLog

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	@${MKDIR} ${DOCSDIR}
.for file in ${PORTDOCS}
	@${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
