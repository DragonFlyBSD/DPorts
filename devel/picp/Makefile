# Created by: Bruce M Simpson <bms@spc.org>
# $FreeBSD: devel/picp/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	picp
PORTVERSION=	0.6.8
CATEGORIES=	devel
MASTER_SITES=	http://home.pacbell.net/theposts/picmicro/

MAINTAINER=	xride@FreeBSD.org
COMMENT=	Driver for the Microchip Picstart Plus development programmer

PLIST_FILES=	bin/picp

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/picp ${PREFIX}/bin

.include <bsd.port.mk>
