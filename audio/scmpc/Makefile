# New ports collection makefile for:	scmpc
# Date created:				January 16, 2008
# Whom:					Pavel Motyrev <legioner.r@gmail.com>
#
# $FreeBSD: ports/audio/scmpc/Makefile,v 1.8 2012/11/17 05:54:43 svnexp Exp $
#

PORTNAME=	scmpc
PORTVERSION=	0.3.1
CATEGORIES=	audio
MASTER_SITES=	http://cloud.github.com/downloads/cmende/${PORTNAME}/

MAINTAINER=	legioner.r@gmail.com
COMMENT=	An Audioscrobbler client for MPD

LICENSE=	GPLv2

LIB_DEPENDS=	confuse.0:${PORTSDIR}/devel/libconfuse \
		curl.6:${PORTSDIR}/ftp/curl

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	glib20

MAN1=		scmpc.1
PLIST_FILES=	bin/scmpc
PORTDOCS=	NEWS README scmpc.conf.example

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
