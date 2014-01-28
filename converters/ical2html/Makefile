# Created by: keiichi@iijlab.net
# $FreeBSD: converters/ical2html/Makefile 339537 2014-01-12 19:48:11Z kwm $

PORTNAME=	ical2html
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	converters
MASTER_SITES=	http://www.w3.org/Tools/Ical2html/

MAINTAINER=	keiichi@iijlab.net
COMMENT=	Manipulation commands for iCalendar files

LIB_DEPENDS=	libical.so:${PORTSDIR}/devel/libical

GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include/libical -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
