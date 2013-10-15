# Created by: obrien@NUXI.com
# $FreeBSD: x11-clocks/rclock/Makefile 327778 2013-09-20 23:44:55Z bapt $

PORTNAME=	rclock
PORTVERSION=	2.7.10
PORTREVISION=	2
CATEGORIES=	x11-clocks
MASTER_SITES=	SF/rxvt/rxvt-dev/${PORTVERSION}
DISTNAME=	rxvt-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Analog clock for X w/appointment reminder and mail notification

USE_XORG=	x11 xau xdmcp ice xpm xv
GNU_CONFIGURE=	yes
ALL_TARGET=	clock
MAN1=		rclock.1

PLIST_FILES=	bin/rclock

CPPFLAGS+=	-DMAIL_SPOOL='\"/var/mail/\"'

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} \
		's|^subdirs =.*$$|subdirs = rclock|g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
