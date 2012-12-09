# New ports collection makefile for:	icons-tango
# Date created:		2006-04-16
# Whom:			Phillip Neumann <pneumann@gmail.com>
#
# $FreeBSD: ports/x11-themes/icons-human-azul/Makefile,v 1.4 2012/11/17 06:03:32 svnexp Exp $
#

PORTNAME=	icons-human-azul
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.gnome-look.org/CONTENT/content-files/
DISTNAME=	37099-HumanAzul

MAINTAINER=	pneumann@gmail.com
COMMENT=	A set of icons from the Ubuntu human look

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/HumanAzul

do-install:
	@${MKDIR} ${PREFIX}/share/icons/HumanAzul
	@${CP} -rip ${WRKSRC} ${PREFIX}/share/icons/

.include <bsd.port.mk>
