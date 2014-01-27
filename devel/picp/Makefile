# Created by: Bruce M Simpson <bms@spc.org>
# $FreeBSD: devel/picp/Makefile 340722 2014-01-22 17:00:46Z mat $

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
