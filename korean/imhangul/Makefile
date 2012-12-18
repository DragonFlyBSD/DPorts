# New ports collection makefile for:	imhangul
# Date created:		May 26 2003
# Whom:			CHOI Junho <cjh@kr.freebsd.org>
#
# $FreeBSD: ports/korean/imhangul/Makefile,v 1.30 2012/11/17 05:58:46 svnexp Exp $
#

PORTNAME=	imhangul
PORTVERSION=	2.1.0
PORTREVISION=	1
CATEGORIES=	korean
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	jkim@FreeBSD.org
COMMENT=	GTK+-2.0 Hangul input module

LICENSE=	GPLv2

LIB_DEPENDS=	hangul.1:${PORTSDIR}/korean/libhangul

USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes

.if !defined(WITHOUT_NLS)
USE_GETTEXT=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include
PLIST_SUB+=	NLS=""
.else
PLIST_SUB+=	NLS="@comment "
.endif

.include <bsd.port.mk>
