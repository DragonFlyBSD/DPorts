# New ports collection makefile for:	crip
# Date created:				30 June 2003
# Whom:	      				Philip Paeps <philip@paeps.cx>
#
# $FreeBSD: ports/audio/crip/Makefile,v 1.12 2012/11/17 05:54:29 svnexp Exp $
#

PORTNAME=	crip
PORTVERSION=	3.9
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://bach.dynet.com/crip/src/

MAINTAINER=	philip@FreeBSD.org
COMMENT=	Terminal-based ripper/encoder/tagger

RUN_DEPENDS=	p5-CDDB_get>=0:${PORTSDIR}/audio/p5-CDDB_get \
		cdparanoia:${PORTSDIR}/audio/cdparanoia \
		oggenc:${PORTSDIR}/audio/vorbis-tools \
		vorbisgain:${PORTSDIR}/audio/vorbisgain

.if defined(WITH_SOX)
RUN_DEPENDS+=	sox:${PORTSDIR}/audio/sox
.endif

.if !defined(NOPORTDOCS)
PORTDOCS=	Changelog README criprc_example
.endif

NO_BUILD=	yes
USE_PERL5=	yes

pre-fetch:
.if !defined (WITH_SOX)
	@${ECHO_MSG} "Define WITH_SOX to enable normalization with sox."
.endif

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/crip ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/editcomment ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/editfilenames ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
