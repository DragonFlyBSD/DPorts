# Created by: ijliao
# $FreeBSD: multimedia/avinfo/Makefile 322840 2013-07-12 15:01:45Z amdmi3 $

PORTNAME=	avinfo
PORTVERSION=	1.0.a15
CATEGORIES=	multimedia
MASTER_SITES=	http://shounen.ru/soft/avinfo/ \
		http://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}unix

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A utility for displaying AVI header information

USE_GMAKE=	yes
USES=		bison

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PLIST_FILES=	bin/avinfo

PORTDOCS=	*

MAN1=		avinfo.1

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e '/^CC=/ d; /^CFLAGS=/ d; /^PREFIX=/ d' \
		${WRKSRC}/config.mk
	@${REINPLACE_CMD} -e '/BISON.*-d/ s|$$| \&\& ${REINPLACE_CMD} -e "/int yyparse (void)/ d" ass.tab.h|' \
		${WRKSRC}/src/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/avinfo ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/src/avinfo.1 ${MANPREFIX}/man/man1/
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/CHANGELOG ${WRKSRC}/README \
		${WRKSRC}/copying ${WRKSRC}/doc/* ${DOCSDIR}/
.endif

.include <bsd.port.mk>
