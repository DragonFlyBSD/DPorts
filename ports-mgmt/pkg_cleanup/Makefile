PORTNAME=	pkg_cleanup
PORTVERSION=	2.1
PORTREVISION=	2
CATEGORIES=	ports-mgmt
DISTFILES=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interactive program for deinstalling 'leaf' packages

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	sbin/pkg_cleanup \
		share/man/man1/pkg_cleanup.1.gz

USES= ncurses
do-extract:
	@${MKDIR} ${WRKSRC}
	@${CP} -a ${FILESDIR}/ ${WRKSRC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pkg_cleanup ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/pkg_cleanup.1 ${STAGEDIR}${PREFIX}/share/man/man1

dfly-patch:
	${REINPLACE_CMD} -e "s@if __FreeBSD_version@if 0 //@g"	\
		${WRKSRC}/pkg_cleanup.c

.include <bsd.port.mk>
