# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/multimedia/libquvi-scripts/Makefile,v 1.12 2012/12/09 06:04:38 svnexp Exp $

PORTNAME=	libquvi-scripts
PORTVERSION=	0.4.10
CATEGORIES=	multimedia devel
MASTER_SITES=	SF/quvi/${PORTVERSION:R}/${PORTNAME}/ \
		GOOGLE_CODE

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Embedded lua scripts for libquvi and utility scripts

OPTIONS_DEFINE=	NSFW
NSFW_DESC=	Enable adult website support

GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack pkgconfig
USE_XZ=		yes

MAN7=		libquvi-scripts.7

PROJECTHOST=	quvi

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNSFW}
CONFIGURE_ARGS+=--with-nsfw
PLIST_SUB+=	NSFW=""
.else
PLIST_SUB+=	NSFW="@comment "
.endif

.include <bsd.port.mk>
