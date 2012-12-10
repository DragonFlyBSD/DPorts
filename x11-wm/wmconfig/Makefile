# New ports collection makefile for:	wmconfig
# Whom:					Tommy Scheunemann <net@arrishq.org>
# Date created:		17 August 2003
#
# $FreeBSD: ports/x11-wm/wmconfig/Makefile,v 1.31 2012/11/17 06:03:44 svnexp Exp $
#

PORTNAME=	wmconfig
PORTVERSION=	1.3.6
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.arrishq.net/files/

MAINTAINER=	net@arrishq.net
COMMENT=	Menu generation tool for X window managers

LICENSE=	GPLv2

USE_BZIP2=	yes
GNU_CONFIGURE=	yes

MAN1=		wmconfig.1x

PORTDOCS=	AUTHORS ChangeLog COPYING README TODO

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
