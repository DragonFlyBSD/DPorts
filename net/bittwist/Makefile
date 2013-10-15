# $FreeBSD: net/bittwist/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	bittwist
PORTVERSION=	1.1
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/_BSD/Bit-Twist%20${PORTVERSION}
DISTNAME=	${PORTNAME}-bsd-${PORTVERSION}

MAINTAINER=	wxs@FreeBSD.org
COMMENT=	Libpcap-based Ethernet packet generator, with PCAP editor

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
USE_GMAKE=	yes

MAN1=		bittwist.1 bittwistb.1 bittwiste.1
PLIST_FILES=	bin/bittwist bin/bittwistb bin/bittwiste

NO_STAGE=	yes
.include <bsd.port.mk>
