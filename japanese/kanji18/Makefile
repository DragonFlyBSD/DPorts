# Created by: Yoshiro MIHIRA <sanpei@sanpei.org>
# $FreeBSD$

PORTNAME=	kanji
PORTVERSION?=	1.0
PORTREVISION?=	7
CATEGORIES=	japanese x11-fonts
MASTER_SITES=   http://leaf.dragonflybsd.org/~marino/dports-src/
PKGNAMESUFFIX?=	18
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}
DISTFILES=	${DISTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	sanpei@FreeBSD.org
COMMENT=	X11 ${PKGNAMESUFFIX}-dot Kanji font

USES=		fonts tar:bz2
BUILD_DEPENDS=	mkbold:${PORTSDIR}/x11-fonts/mkbold-mkitalic \
		bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf

NO_WRKSUBDIR=	yes

PKGINSTALL=	${WRKSRC}/INSTALL
PKGDEINSTALL=	${WRKSRC}/DEINSTALL
MAKE_ENV=	FONTSDIR=${FONTSDIR:S,${PREFIX},,}
RESIZESED_FILE?=	18to16.sed
RESIZED_ALIAS_FILE?=	kanji16.alias

OPTIONS_DEFINE=	DOCS

post-extract:
	@(cd ${WRKSRC}; ${CAT} kanji${PKGNAMESUFFIX}.a? | uudecode)
	@${CP} -p ${FILESDIR}/Makefile.in ${WRKDIR}/Makefile
	@${GUNZIP_CMD} ${WRKSRC}/kanji${PKGNAMESUFFIX}.bdf.Z

pre-install:
	@for file in INSTALL DEINSTALL; do \
		${SED} -e 's,%%FONTSDIR%%,${FONTSDIR},g' \
		       -e 's,%%LOCALBASE%%,${LOCALBASE},g' \
			< ${FILESDIR}/$${file}.tmpl > ${WRKSRC}/$${file}; \
	done

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/doc/${DISTNAME}
	${INSTALL_DATA} ${WRKSRC}/${RESIZESED_FILE} ${STAGEDIR}${PREFIX}/share/doc/${DISTNAME}
	${INSTALL_DATA} ${WRKSRC}/README.${DISTNAME} ${STAGEDIR}${PREFIX}/share/doc/${DISTNAME}
	${INSTALL_DATA} ${WRKSRC}/${RESIZED_ALIAS_FILE} ${STAGEDIR}${PREFIX}/share/doc/${DISTNAME}
	${INSTALL_DATA} ${WRKSRC}/${DISTNAME}.alias ${STAGEDIR}${PREFIX}/share/doc/${DISTNAME}

.include <bsd.port.mk>
