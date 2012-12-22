# New ports collection makefile for:	mgstat
# Date created:		11 May 2001
# Whom:			jeh@FreeBSD.org
#
# $FreeBSD: ports/www/mgstat/Makefile,v 1.19 2012/11/17 06:02:39 svnexp Exp $
#

PORTNAME=	mgstat
PORTVERSION=	0.12
PORTREVISION=	5
CATEGORIES=	www
MASTER_SITES=	http://wizard.ae.krakow.pl/~mike/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Produce graphs from mod_gzip log files

LIB_DEPENDS=	gd.4:${PORTSDIR}/graphics/gd

GNU_CONFIGURE=	yes

PORTDOCS=	Copyright README USAGE
PLIST_FILES=	bin/mgstat

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
