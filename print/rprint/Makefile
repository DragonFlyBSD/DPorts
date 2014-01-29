# Created by: Konrad Heuer
# $FreeBSD: print/rprint/Makefile 340722 2014-01-22 17:00:46Z mat $

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
