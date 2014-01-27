# Created by: Bruce M. Simpson <bms@FreeBSD.org>
# $FreeBSD: devel/upslug/Makefile 340953 2014-01-24 23:58:01Z bapt $

PORTNAME=	upslug
PORTVERSION=	2.11
CATEGORIES=	devel
MASTER_SITES=	SF/nslu/UpSlug2/${PORTNAME}2-11
DISTNAME=	upslug2-11

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Firmware upload tool for Linksys NSLU2

USES=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--with-libpcap

NO_MAN=		defined

PLIST_FILES=	sbin/upslug2

.include <bsd.port.mk>
