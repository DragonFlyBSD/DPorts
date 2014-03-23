# Created by: Yoshiro MIHIRA <sanpei@sanpei.org>
# $FreeBSD$

PORTNAME=	kanji
PORTVERSION?=	1.0
PORTREVISION?=	5
CATEGORIES=	japanese x11-fonts
MASTER_SITES=   http://leaf.dragonflybsd.org/~marino/dports-src/
PKGNAMESUFFIX?=	18
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}
DISTFILES=	${DISTNAME}-${PORTVERSION}${EXTRACT_SUFX}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	sanpei@FreeBSD.org
COMMENT=	X11 ${PKGNAMESUFFIX}-dot Kanji font

BUILD_DEPENDS=	mkbold:${PORTSDIR}/x11-fonts/mkbold-mkitalic \
		bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf \
		mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir \
		mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale
RUN_DEPENDS=	mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir

FONTSDIR=	lib/X11/fonts/local
NO_WRKSUBDIR=	yes

PKGINSTALL=	${WRKSRC}/INSTALL
PKGDEINSTALL=	${WRKSRC}/DEINSTALL
MAKE_ENV=	FONTSDIR=${FONTSDIR}
PLIST_SUB=	FONTSDIR=${FONTSDIR}
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
