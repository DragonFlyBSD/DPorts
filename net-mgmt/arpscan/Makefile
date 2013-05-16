# Created by: David Yeske <dyeske@gmail.com>
# $FreeBSD: ports/net-mgmt/arpscan/Makefile,v 1.15 2012/11/17 06:00:30 svnexp Exp $

PORTNAME=	arpscan
PORTVERSION=	0.5
CATEGORIES=	net-mgmt
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple arp scanner

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	dnet:${PORTSDIR}/net/libdnet

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=--with-libdnet=${LOCALBASE}

PLIST_FILES=	bin/arpscan

.include <bsd.port.mk>
