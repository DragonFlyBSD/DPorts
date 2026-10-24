PORTNAME=	xlreader
PORTVERSION=	0.9.0
CATEGORIES=	textproc
MASTER_SITES=	SF

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Convert .xls spread sheets to tab delimited CSV or SQL inserts

USES=		tar:tgz

PLIST_FILES=	bin/xlreader

post-patch:
	@${REINPLACE_CMD} -e \
		's|-L/usr/local/lib||; s|^CFLAGS=.*||; s|gcc|${CC}|' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

dfly-patch:
	${RM} -fv ${WRKSRC}/xlreader

.include <bsd.port.mk>
