# Created by: Ade Lovett <ade@lovett.com>
# $FreeBSD: devel/libglade/Makefile 326626 2013-09-07 10:57:48Z az $

PORTNAME=	libglade
PORTVERSION=	0.17
PORTREVISION=	13
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME glade library

USES=		perl5
USE_GMAKE=	yes
USE_GNOME=	gnomehack gnomeprefix gnomehier gnomedb
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-bonobo --enable-gnomedb
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
