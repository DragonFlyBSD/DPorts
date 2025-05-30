PORTNAME=	simh
PORTVERSION=	3.9.0
PORTREVISION=	6
CATEGORIES=	emulators
MASTER_SITES=	http://simh.trailing-edge.com/sources/:src \
		http://www.ml1.org.uk/distfiles/:pdf \
		http://www.ancientgeek.org.uk/distfiles/:pdf
DISTNAME=	${PORTNAME}v${PORTVERSION:R:S/.//}-${PORTVERSION:E}
DISTFILES=	${PORTNAME}v${PORTVERSION:R:S/.//}-${PORTVERSION:E}.zip:src \
		${PORTNAME}_docpdf.zip:pdf

MAINTAINER=	bob@eager.cx
COMMENT=	Emulates classic DEC, HP, GRI, IBM, Altair, SDS, Honeywell, and others
WWW=		http://simh.trailing-edge.com

LICENSE=	MIT

NO_WRKSUBDIR=	yes

USES=		gmake dos2unix zip
DOS2UNIX_GLOB=	*.c *.h *.txt *.mak *.ini makefile
CFLAGS+=	-Wno-format-extra-args -Wno-comment
MAKE_ENV=	GCC="${CC}" CFLAGS_O="${CFLAGS}" USE_NETWORK=1
MAKEFILE=	makefile

CONFLICTS_INSTALL=	simh-hp2100

SUB_FILES=	pkg-message simh.1

READMES=	0readme_${PORTVERSION:R:S/.//}.txt 0readme_ethernet.txt
PORTDOCS=	${READMES} pdf/*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.pre.mk>

.if ${ARCH} == aarch64 || ${ARCH} == x86_64 || ${ARCH} == armv6 || ${ARCH} == armv7 || ${ARCH} == i386
CFLAGS+=	-Wno-logical-op-parentheses -Wno-bitwise-op-parentheses -Wno-shift-negative-value
.endif

pre-patch:
	@${MKDIR} ${WRKSRC}/BIN

post-patch:
	@${REINPLACE_CMD} -e \
		'/shell ldconfig/s|^|#| ; \
		 /-O2/s| = | ?= |' ${WRKSRC}/makefile
	@${REINPLACE_CMD} -e \
		's|%%DATADIR%%|${DATADIR}|' ${WRKSRC}/VAX/vax_sysdev.c

post-build:
# eclipse, gri and nova conflict with other ports, prefix with simh-
	@${MV} ${WRKSRC}/BIN/eclipse ${WRKSRC}/BIN/simh-eclipse
	@${MV} ${WRKSRC}/BIN/gri ${WRKSRC}/BIN/simh-gri
	@${MV} ${WRKSRC}/BIN/nova ${WRKSRC}/BIN/simh-nova

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/BIN/* ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/VAX/ka655x.bin ${STAGEDIR}${DATADIR}
	${INSTALL_MAN} ${WRKDIR}/simh.1 ${STAGEDIR}${PREFIX}/share/man/man1

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/pdf
	(cd ${WRKSRC} && ${INSTALL_DATA} ${READMES} ${STAGEDIR}${DOCSDIR})
	(cd ${WRKSRC} && ${COPYTREE_SHARE} pdf ${STAGEDIR}${DOCSDIR})

.include <bsd.port.post.mk>
