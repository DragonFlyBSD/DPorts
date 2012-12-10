# New ports collection makefile for:   nc6
# Date created:                30 May 2002
# Whom:                        Filippo Natali <filippo@widestore.net>
#
# $FreeBSD: ports/net/nc6/Makefile,v 1.22 2012/11/17 06:00:06 svnexp Exp $
#

PORTNAME=	nc6
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	net ipv6
MASTER_SITES=	ftp://ftp.deepspace6.net/pub/ds6/sources/nc6/ \
		http://ftp.deepspace6.net/pub/ds6/sources/nc6/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Netcat clone with IPv6 support

MAN1=	nc6.1
USE_ICONV=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.if !defined(WITHOUT_NLS)
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

.include <bsd.port.mk>
