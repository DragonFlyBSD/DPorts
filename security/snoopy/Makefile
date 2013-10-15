# Created by: Philippe Audeoud <jadawin@tuxaco.net>
# $FreeBSD: security/snoopy/Makefile 328031 2013-09-23 19:06:06Z sunpoet $

PORTNAME=	snoopy
PORTVERSION=	1.8.0
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}logger/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	execve() wrapper and logger

LICENSE=	GPLv2

OPTIONS_DEFINE=	DOCS

PLIST_FILES=	lib/snoopy.so bin/detect
PORTDOCS=	README

GNU_CONFIGURE=	yes
USES=		gmake

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} 's|/usr/local|${PREFIX}|g' ${WRKSRC}/README
	@${REINPLACE_CMD} '/^LIBS.*/d' ${WRKSRC}/Makefile.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/detect ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_PROGRAM} ${WRKSRC}/snoopy.so ${STAGEDIR}${PREFIX}/lib/
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/
.endif

.include <bsd.port.mk>
