# New ports collection makefile for:   fakebo
# Date created:        16 March 1999
# Whom:                Kris Kennaway <kris@FreeBSD.org>
#
# $FreeBSD: ports/security/fakebo/Makefile,v 1.18 2012/11/17 06:01:03 svnexp Exp $
#

PORTNAME=	fakebo
PORTVERSION=	0.4.2.1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION:R}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A fake BackOrifice client emulator

LICENSE=	GPLv2 # (or later)
LICENSE_FILE=	${WRKSRC}/COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:R}

USE_AUTOTOOLS=	aclocal autoheader automake autoconf
AUTOMAKE_ARGS=	--add-missing
MAKE_JOBS_SAFE=	yes

MAN1=		fakebo.1
PORTDOCS=	README custom.replies
PLIST_FILES=	bin/fakebo etc/fakebo.conf.sample

post-extract:
	@${FIND} ${WRKSRC} -type l -delete

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fakebo ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/fakebo.1 ${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/fakebo.conf.dist ${PREFIX}/etc/fakebo.conf.sample
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/custom.replies ${DOCSDIR}
.endif

.include <bsd.port.mk>
