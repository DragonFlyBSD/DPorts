PORTNAME=	bsddialog
DISTVERSION=	1.1
CATEGORIES=	devel

MAINTAINER=	asiciliano@FreeBSD.org
COMMENT=	Text User Interface Widgets
WWW=		https://gitlab.com/alfix/bsddialog

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITLAB=	yes
GL_ACCOUNT=	alfix

MAKE_ARGS=	-DNORPATH

PLIST_SUB+=	DISTVERSION=${DISTVERSION}

LIBDIR=		${WRKSRC}/lib
HEADERS=	${LIBDIR}/bsddialog.h ${LIBDIR}/bsddialog_progressview.h \
		${LIBDIR}/bsddialog_theme.h
UTILDIR=	${WRKSRC}/utility

USES= ncurses
do-install:
	${INSTALL_DATA} ${HEADERS} ${STAGEDIR}${PREFIX}/include
	${INSTALL_LIB} ${LIBDIR}/lib${PORTNAME}.so.${PORTVERSION} ${STAGEDIR}${PREFIX}/lib/
	${RLN} ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so.${PORTVERSION} ${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so
	${INSTALL_DATA} ${LIBDIR}/lib${PORTNAME}.a ${STAGEDIR}/${PREFIX}/lib
	${INSTALL_MAN} ${LIBDIR}/${PORTNAME}.3 ${STAGEDIR}${PREFIX}/share/man/man3/
	${INSTALL_PROGRAM} ${UTILDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${UTILDIR}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1/

dfly-patch:
	${REINPLACE_CMD} -e 's@-fstack-protector-strong -Qunused-arguments@-Wno-implicit-fallthrough@g' \
		${WRKSRC}/lib/Makefile
	${REINPLACE_CMD} -e 's@-Werror@@g' \
			 -e 's@-ltinfow@-ltinfo@g' \
		${WRKSRC}/Makefile \
		${WRKSRC}/utility/Makefile
		

.include <bsd.port.mk>
