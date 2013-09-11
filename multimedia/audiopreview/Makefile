# Created by: kevlo 
# $FreeBSD: multimedia/audiopreview/Makefile 326491 2013-09-06 12:12:00Z bapt $

PORTNAME=	audiopreview
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	http://audiopreview.codealpha.net/files/

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	A command-line tool to play previews of audio and video files

USES=		gmake pkgconfig
USE_GSTREAMER=	core
USE_GNOME=	intltool
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	bin/audiopreview
MAN1=		audiopreview.1

.include <bsd.port.mk>
