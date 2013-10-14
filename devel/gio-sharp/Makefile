# Created by: Romain Tartiere <romain@FreeBSD.org>
# $FreeBSD: devel/gio-sharp/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	gio-sharp
PORTVERSION=	2.22.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://ftp.novell.com/pub/mono/sources/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	GIO bindings not available in gtk-sharp

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_GNOME=	gnomehack gtksharp20

MAKE_JOBS_UNSAFE=yes

NO_STAGE=	yes
.include <bsd.port.mk>
