# Created by: Jim Mock <jim@FreeBSD.org>
# $FreeBSD: deskutils/gaddr/Makefile 330379 2013-10-15 09:50:13Z bapt $

PORTNAME=	gaddr
PORTVERSION=	1.1.4
PORTREVISION=	5
CATEGORIES=	deskutils gnome
MASTER_SITES=	http://www.wirelesscouch.net/software/gaddr/ \
		http://bsd-geek.de/FreeBSD/distfiles/

MAINTAINER=	lme@FreeBSD.org
COMMENT=	GTK 1.x address book

PLIST_FILES=	bin/gaddr
GNU_CONFIGURE=	yes
USE_GNOME=	gtk12

MAKE_ARGS+=	PREFIX="${STAGEDIR}${PREFIX}"

.include <bsd.port.mk>
