# New ports collection makefile for:    rprint
# Date created:         June 19th, 2001
# Whom:                 Konrad Heuer
#
# $FreeBSD: ports/print/rprint/Makefile,v 1.7 2012/11/17 06:00:54 svnexp Exp $
#

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

post-patch:
	@${REINPLACE_CMD} -e "s/^(CC|CFLAGS).+//g" ${WRKSRC}/Makefile

.include <bsd.port.mk>
