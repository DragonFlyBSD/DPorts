# Created by: ache
# $FreeBSD: archivers/lha/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	lha
PORTVERSION=	1.14i
PORTREVISION=	6
CATEGORIES=	archivers
MASTER_SITES=	http://www2m.biglobe.ne.jp/~dolphin/lha/prog/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.//}

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Archive files using LZSS and Huffman compression (.lzh files)

MANLANG=	ja
MAN1=		lha.1
PLIST_FILES=	bin/lha
PLIST_FILES+=	${__MANPAGES}

do-install:
	-${MKDIR} ${STAGEDIR}${PREFIX}/man/ja/man1
	${INSTALL_PROGRAM} ${WRKSRC}/src/lha ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/man/lha.n ${STAGEDIR}${PREFIX}/man/ja/man1/lha.1

.include <bsd.port.mk>
