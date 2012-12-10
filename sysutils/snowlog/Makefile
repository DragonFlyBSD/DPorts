# ex:ts=8
# New ports collection makefile for:	snowlog
# Date created:			Jul 30 2004
# Whom:				Cheng-Lung Sung <clsung@dragon2.net>
#
# $FreeBSD: ports/sysutils/snowlog/Makefile,v 1.9 2012/11/17 06:01:46 svnexp Exp $
#

PORTNAME=	snowlog
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://kiza.kcore.de/software/snowlog/download/

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	A webserver access log browser/analyzer

LIB_DEPENDS=	pcre.1:${PORTSDIR}/devel/pcre

MAN1=		snowlog.1
DOCS=		INSTALLATION doc/README doc/filters.example
SHAREDOCS=	referers.regexp useragents.regexp

.include <bsd.port.pre.mk>

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DATADIR}
	cd ${WRKSRC}/share && ${INSTALL_DATA} ${SHAREDOCS} ${DATADIR}
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
