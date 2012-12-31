# New ports collection makefile for:	sanduhr
# Date created:				14 September 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/x11-clocks/sanduhr/Makefile,v 1.28 2012/11/17 06:03:24 svnexp Exp $
#

PORTNAME=	sanduhr
PORTVERSION=	1.93
PORTREVISION=	8
CATEGORIES=	x11-clocks gnome
MASTER_SITES=	http://seehuhn.de/media/programs/

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	An alarm clock for GNOME desktop designed as a sand-glass

USE_GNOME=	gnomehack gnomeprefix libgnomeui
USE_GMAKE=	yes
INSTALLS_OMF=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		sanduhr.1

.include <bsd.port.mk>
