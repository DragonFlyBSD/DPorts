# Created by: Konrad Heuer
# $FreeBSD: print/rprint/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	rprint
PORTVERSION=	3.2
CATEGORIES=	print
MASTER_SITES=	ftp://gwdu111.gwdg.de/pub/FreeBSD/misc/ \
		ftp://gwdu112.gwdg.de/pub/FreeBSD/misc/

MAINTAINER=	kheuer@gwdu60.gwdg.de
COMMENT=	Remote printing utility using a raw bidirectional tcp connection

MAN1=		rprint.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/rprint

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s/^(CC|CFLAGS).+//g" ${WRKSRC}/Makefile

.include <bsd.port.mk>
