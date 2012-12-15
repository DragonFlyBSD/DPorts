# New ports collection makefile for:	xfree86_xkb_xml
# Date created:				31 May 2002
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/x11/xfree86_xkb_xml/Makefile,v 1.23 2012/11/17 06:03:21 svnexp Exp $
#

PORTNAME=	xfree86_xkb_xml
PORTVERSION=	0.4
PORTREVISION=	5
CATEGORIES=	x11
MASTER_SITES=	SF/gswitchit/OldFiles

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A little set of XML files useful for dealing with XKB rules

USE_ICONV=	yes
USE_GETTEXT=	yes
USE_XORG=	x11
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_PERL5_BUILD=yes
CONFIGURE_ARGS=	--with-xkb-base=${LOCALBASE}/lib/X11/xkb
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
