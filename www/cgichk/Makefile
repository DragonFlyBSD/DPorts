# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: www/cgichk/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cgichk
PORTVERSION=	2.60
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Web site vulnerability scanner

WRKSRC=		${WRKDIR}/${PORTNAME}
ALL_TARGET=	cgichk

post-patch:
	${REINPLACE_CMD} -e "s/^(CC|CFLAGS).+//g" ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e \
		"s@/etc/@${PREFIX}/etc/@g; s/#include <getopt.h>//g;" \
		${WRKSRC}/cgichk.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cgichk ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/cgichk.cfg ${STAGEDIR}${PREFIX}/etc/cgichk.cfg.sample

.include <bsd.port.mk>
