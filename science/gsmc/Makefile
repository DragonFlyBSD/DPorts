# Created by: db
# $FreeBSD: science/gsmc/Makefile 338191 2013-12-30 22:50:38Z db $

PORTNAME=	gsmc
PORTVERSION=	1.1
PORTREVISION=	4
CATEGORIES=	science hamradio
MASTER_SITES=	http://www.qsl.net/ik5nax/

MAINTAINER=	db@FreeBSD.org
COMMENT=	Smith chart program for impedance matching

USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USES=		gmake pkgconfig
USE_AUTOTOOLS=	aclocal automake autoconf
AUTOMAKE_ARGS=	-i --add-missing --foreign --copy

.include <bsd.port.mk>
