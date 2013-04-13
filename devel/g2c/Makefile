# Created by: ijliao
# $FreeBSD: devel/g2c/Makefile 315433 2013-03-28 03:28:30Z eadler $

PORTNAME=	g2c
PORTVERSION=	0.4
PORTREVISION=	4
CATEGORIES=	devel gnome
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Glade to C translator

PLIST_FILES=	bin/g2c
USES=        pathfix
USE_GNOME=	gtk12 libxml orbit
WANT_GNOME=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

.include <bsd.port.pre.mk>

.if ${HAVE_GNOME:Mbonobo} != "" && ${HAVE_GNOME:Mgnomedb} != ""
USE_GNOME+=	gnomeprefix bonobo gnomedb
PKGNAMESUFFIX+=	-gnome
.else
CONFIGURE_ARGS=	--disable-gnome
.endif

.include <bsd.port.post.mk>
