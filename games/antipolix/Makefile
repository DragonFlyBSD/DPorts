PORTNAME=	antipolix
PORTVERSION=	2.1
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	XCONTRIB/games/multiplayer
DISTNAME=	AntipoliX_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple multiplayer game for X Window System

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

NO_WRKSUBDIR=	yes
USES=		imake:noman xorg
USE_XORG=	x11

OPTIONS_DEFINE=	DOCS EXAMPLES

DPMSG= ${WRKDIR}/dports-message
PKGMESSAGE= ${DPMSG}
pre-build:
	@${TOUCH} ${WRKSRC}/client.man ${WRKSRC}/server.man

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/client ${STAGEDIR}${PREFIX}/bin/antipolix-client
	${INSTALL_PROGRAM} ${WRKSRC}/server ${STAGEDIR}${PREFIX}/bin/antipolix-server
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/.motd ${STAGEDIR}${EXAMPLESDIR}/dot.motd.sample
	${INSTALL_DATA} ${WRKSRC}/.players ${STAGEDIR}${EXAMPLESDIR}/dot.players.sample
	${INSTALL_DATA} ${WRKSRC}/.server_defaults ${STAGEDIR}${EXAMPLESDIR}/dot.server_defaults.sample
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in ANTIPOLIX_RULES CLIENT_USE COPYRIGHT SERVER_USE
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

dfly-patch:
	${REINPLACE_CMD} -e 's@ifdef \(__FreeBSD__\)@if defined(\1)||defined(__DragonFly__)@g'	\
		${WRKSRC}/client.c					\
		${WRKSRC}/server.c					\
		${WRKSRC}/creation.c					\
		${WRKSRC}/messages.c
	@${ECHO} "########################################################" >> ${DPMSG}
	@${ECHO} '# Prepare: ".server_defaults" , ".motd" and ".players" #' >> ${DPMSG}
	@${ECHO} "########################################################" >> ${DPMSG}

.include <bsd.port.mk>
