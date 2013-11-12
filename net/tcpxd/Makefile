# Created by: Babak Farrokhi <babak@farrokhi.net>
# $FreeBSD: net/tcpxd/Makefile 332003 2013-10-29 20:57:21Z olgeni $

PORTNAME=	tcpxd
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	net net-mgmt
MASTER_SITES=	http://fossies.org/unix/privat/ \
		http://www.sourcefiles.org/Networking/Tools/Proxy/ \
		http://quozl.us.netrek.org/tcpxd/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	General purpose TCP/IP relay

LICENSE=	GPLv2 # (or later)
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tcpxd ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_DATA} ${WRKSRC}/tcpxd.conf ${STAGEDIR}${PREFIX}/etc/tcpxd.conf.dist

.include <bsd.port.mk>
