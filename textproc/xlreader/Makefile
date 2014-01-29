# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: textproc/xlreader/Makefile 340722 2014-01-22 17:00:46Z mat $

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
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
