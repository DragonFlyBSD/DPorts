# New ports collection makefile for:	ripperx
# Date created:		2006-12-26
# Whom:			trasz <trasz@pin.if.uz.zgora.pl>
#
# $FreeBSD: ports/audio/ripperx/Makefile,v 1.16 2012/11/17 05:54:43 svnexp Exp $
#

PORTNAME=	ripperx
PORTVERSION=	2.7.3
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF
DISTNAME=	ripperX-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK program to rip CD audio tracks and encode them

LIB_DEPENDS=	id3:${PORTSDIR}/audio/id3lib
RUN_DEPENDS=	cdparanoia:${PORTSDIR}/audio/cdparanoia

GNU_CONFIGURE=	yes
CFLAGS+=	-L${LOCALBASE}/lib
USE_GMAKE=	yes
USE_GNOME=	gtk20 gnomehack
MAN1=		ripperX.1

.include <bsd.port.mk>
