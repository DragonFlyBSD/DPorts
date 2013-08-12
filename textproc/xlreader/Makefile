# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: textproc/xlreader/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	xlreader
PORTVERSION=	0.9.0
CATEGORIES=	textproc
MASTER_SITES=	SF
EXTRACT_SUFX=	.tgz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Convert .xls spread sheets to tab delimited CSV or SQL inserts

PLIST_FILES=	bin/xlreader

post-patch:
	@${REINPLACE_CMD} -e \
		's|-L/usr/local/lib||; s|^CFLAGS=.*||; s|gcc|${CC}|' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
