# New ports collection makefile for:	Baekmuk Korean TrueType fonts
# Date created:		17 Jan 2000
# Whom:			CHOI Junho <cjh@kr.freebsd.org>
#
# $FreeBSD: ports/korean/baekmukfonts-ttf/Makefile,v 1.12 2012/11/17 05:58:46 svnexp Exp $
#

PORTNAME=	baekmukfonts
PORTVERSION=	2.2
CATEGORIES=	korean
MASTER_SITES=	http://kldp.net/frs/download.php/1429/
PKGNAMESUFFIX=	-ttf
DISTNAME=	${FONTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Baekmuk family Korean TrueType Fonts

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

NO_BUILD=	yes

FONTNAME=	baekmuk
FONTSDIR=	lib/X11/fonts/${FONTNAME}${PKGNAMESUFFIX}
PLIST_SUB=	FONTSDIR=${FONTSDIR}

do-install:
	${MKDIR} ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/COPYRIGHT ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/COPYRIGHT.ks ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/contrib/hconfig.ps ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/ttf/*.ttf ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/ttf/fonts.dir ${PREFIX}/${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/ttf/fonts.scale.xtt \
	    ${PREFIX}/${FONTSDIR}/fonts.scale

post-install:
	@-${PREFIX}/bin/fc-cache -s ${PREFIX}/${FONTSDIR} 2>/dev/null

.include <bsd.port.mk>
