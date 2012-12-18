# New ports collection makefile for:	kasumi
# Date Created:				10 January 2005
# Whom:					MANTANI Nobutaka <nobutaka@FreeBSD.org>
#
# $FreeBSD: ports/japanese/kasumi/Makefile,v 1.24 2012/11/17 05:58:35 svnexp Exp $
#

PORTNAME=	kasumi
PORTVERSION=	2.5
PORTREVISION=	4
CATEGORIES=	japanese
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE_JP}
MASTER_SITE_SUBDIR=	${PORTNAME}/41436

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	A dictionary management tool for anthy

USE_GMAKE=	yes
USE_GNOME=	gnomehier gtk20
LIB_DEPENDS=	anthy.1:${PORTSDIR}/japanese/anthy

GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		kasumi.1

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=--disable-nls
PLIST_SUB+=	NLS="@comment "
.else
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.endif

.include <bsd.port.mk>
