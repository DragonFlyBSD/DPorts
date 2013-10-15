# Created by: David Yeske <dyeske@gmail.com>
# $FreeBSD: net-mgmt/arpscan/Makefile 327757 2013-09-20 22:24:43Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
