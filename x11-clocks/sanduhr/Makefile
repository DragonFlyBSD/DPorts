# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: x11-clocks/sanduhr/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	sanduhr
PORTVERSION=	1.93
PORTREVISION=	8
CATEGORIES=	x11-clocks gnome
MASTER_SITES=	http://seehuhn.de/media/programs/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Alarm clock for GNOME desktop designed as a sand-glass

USES=		gmake pathfix pkgconfig
USE_GNOME=	gnomeprefix libgnomeui
INSTALLS_OMF=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
