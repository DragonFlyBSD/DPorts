# Created by: Lars Eggert <lars@eggert.org>
# $FreeBSD: benchmarks/spp/Makefile 319106 2013-05-26 12:42:35Z culot $

PORTNAME=	spp
PORTVERSION=	0.3.4
CATEGORIES=	benchmarks
MASTER_SITES=	http://caia.swin.edu.au/tools/spp/downloads/

MAINTAINER=	lars@eggert.org
COMMENT=	Calculates round trip time from pcap files or live capture

PLIST_FILES=	bin/spp
MAN1=		spp.1

post-patch:
	@${REINPLACE_CMD} -E '/(-DDEBUG|-g)/s|^|#|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
