# New ports collection makefile for:	gtk-theme-switch
# Date Created:				24 July 2000
# Whom:				 	Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/x11/gtk-theme-switch/Makefile,v 1.17 2012/11/17 06:03:16 svnexp Exp $
#

PORTNAME=	gtk-theme-switch
PORTVERSION=	1.0.1
PORTREVISION=	6
CATEGORIES=	x11
MASTER_SITES=	http://www.muhri.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A command line tool for switching GTK+ themes

USE_GNOME=	gtk12
USE_GMAKE=	yes

MAN1=		gtk-theme-switch.1

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${PREFIX}/share/gtk-theme-switch
	${INSTALL_MAN} ${WRKSRC}/readme ${PREFIX}/share/gtk-theme-switch/README
.endif

.include <bsd.port.mk>
