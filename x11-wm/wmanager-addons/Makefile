# New ports collection makefile for:	wmanager-addons
# Date created:		22 May 2008
# Whom:			Peter Pentchev <roam@FreeBSD.org>
#
# $FreeBSD: ports/x11-wm/wmanager-addons/Makefile,v 1.5 2012/12/10 01:26:35 svnexp Exp $
#

PORTNAME=	wmanager-addons
PORTVERSION=	0.02
CATEGORIES=	x11-wm
MASTER_SITES=	http://devel.ringlet.net/x11/wmanager-addons/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Helper scripts and documentation for the X11 window manager selector

USE_PERL5_RUN=	yes

MAN1=		wmanager.1 wmanager-loop.1 wmanagerrc-update.1
MANCOMPRESSED=	yes

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
.for file in Changes README THANKS TODO
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
