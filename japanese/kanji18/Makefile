# New ports collection makefile for:	kanji18
# Date created:		23 November 1999
# Whom:			Yoshiro MIHIRA <sanpei@sanpei.org>
#
# $FreeBSD: ports/japanese/kanji18/Makefile,v 1.21 2012/11/17 05:58:35 svnexp Exp $
#

PORTNAME=	kanji
PORTVERSION?=	1.0
PORTREVISION?=	4
CATEGORIES=	japanese x11-fonts
MASTER_SITES=   http://leaf.dragonflybsd.org/~marino/dports-src/
PKGNAMESUFFIX?=	18
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	sanpei@FreeBSD.org
COMMENT=	X11 ${PKGNAMESUFFIX}-dot Kanji font

BUILD_DEPENDS=	mkbold:${PORTSDIR}/x11-fonts/mkbold-mkitalic \
		mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir \
		mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale
BUILD_DEPENDS+= bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf

FONTSDIR=	lib/X11/fonts/local
NO_WRKSUBDIR=	yes

.include <bsd.port.pre.mk>

PKGINSTALL=	${WRKSRC}/INSTALL
PKGDEINSTALL=	${WRKSRC}/DEINSTALL
MAKE_ENV=	FONTSDIR=${FONTSDIR}
PLIST_SUB=	FONTSDIR=${FONTSDIR}
RESIZESED_FILE?=	18to16.sed
RESIZED_ALIAS_FILE?=	kanji16.alias
DNAME=		${PORTNAME}${PKGNAMESUFFIX}

post-extract:
	@(cd ${WRKSRC}; ${CAT} kanji18.a[a-h] | uudecode)
	@${GUNZIP_CMD} ${WRKSRC}/kanji18.bdf.Z

pre-install:
	@for file in INSTALL DEINSTALL; do \
		${SED} -e 's,%%FONTSDIR%%,${FONTSDIR},g' \
		       -e 's,%%LOCALBASE%%,${LOCALBASE},g' \
			< ${FILESDIR}/$${file}.tmpl > ${WRKSRC}/$${file}; \
	done
	@${SETENV} PKG_PREFIX=${PREFIX} \
		${SH} ${PKGREQ} ${PKGNAME} INSTALL

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${PREFIX}/share/doc/${DNAME}
	@${INSTALL_DATA} ${WRKSRC}/${RESIZESED_FILE} ${PREFIX}/share/doc/${DNAME}/
	@${INSTALL_DATA} ${WRKSRC}/README.${DNAME} ${PREFIX}/share/doc/${DNAME}/
	@${INSTALL_DATA} ${WRKSRC}/${RESIZED_ALIAS_FILE} ${PREFIX}/share/doc/${DNAME}/
	@${INSTALL_DATA} ${WRKSRC}/${DNAME}.alias ${PREFIX}/share/doc/${DNAME}/
.endif
	@${SETENV} PKG_PREFIX=${PREFIX} \
		${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.post.mk>
