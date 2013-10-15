# Created by: Stephen Farrell <steve@farrell.org>
# $FreeBSD: misc/tkrunit/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	tkRunIt
PORTVERSION=	0.94.1
PORTREVISION=	2
CATEGORIES=	misc
MASTER_SITES=	http://thaumaturgy.net/~etgold/software/tkRunIt/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.//g}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GUI app launcher with completion and history

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

USE_TK_WRAPPER=	yes

PORTEXAMPLES=	${PORTNAME:tl}
PLIST_FILES=	bin/${PORTNAME}

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e \
		's|/usr/local/bin|${PREFIX}/bin|' ${WRKSRC}/runit.tcl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/runit.tcl ${PREFIX}/bin/${PORTNAME}
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/runitrc.sample ${EXAMPLESDIR}/${PORTNAME:tl}
	@${ECHO_MSG} "		"
	@${ECHO_MSG} "-------------------------------------------------------------------"
	@${ECHO_MSG} "===> Installing runitrc.sample in ${EXAMPLESDIR}/${PORTNAME:tl}"
	@${ECHO_MSG} "===> Copy runitrc.sample to ~/.runitrc and modify if you wish"
	@${ECHO_MSG} "-------------------------------------------------------------------"
	@${ECHO_MSG} "		"
.endif

.include <bsd.port.mk>
