# New ports collection makefile for:	junicode
# Date created:		28 August 2006
# Whom:			Guerkan Senguen <gurkan@phys.ethz.ch>
#
# $FreeBSD: ports/x11-fonts/junicode/Makefile,v 1.15 2012/11/17 06:03:28 svnexp Exp $
#

PORTNAME=	junicode
PORTVERSION=	0.7.6
CATEGORIES=	x11-fonts
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION:S|.|-|g} \
		http://anthesphoria.net/FreeBSD/ports/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION:S|.|-|g}

MAINTAINER=	nikola.lecic@anthesphoria.net
COMMENT=	Unicode/MUFI OpenType font for medievalists (Latin, IPA, Runic, Greek)

BUILD_DEPENDS=	fc-cache:${PORTSDIR}/x11-fonts/fontconfig
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes
USE_ZIP=	yes

PLIST_SUB=	FONTSDIR="${FONTSDIR:S|${PREFIX}/||}"

FONTSDIR?=	${PREFIX}/lib/X11/fonts/${PORTNAME}

do-install:
	@${MKDIR} ${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/fonts/*.ttf ${FONTSDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/* ${DOCSDIR}
.endif

post-install:
	@${ECHO_MSG} "===> Running fc-cache"
	-${LOCALBASE}/bin/fc-cache -f -v ${FONTSDIR}
	@${ECHO_MSG}

.include <bsd.port.mk>
