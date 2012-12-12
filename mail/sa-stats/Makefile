# New ports collection makefile for:	sa-stats
# Date created:				Tue 16 Mar 2010
# Whom:					Alexey V. Degtyarev <alexey@renatasystems.org>
#
# $FreeBSD: ports/mail/sa-stats/Makefile,v 1.2 2012/11/17 05:59:14 svnexp Exp $
#

PORTNAME=	sa-stats
PORTVERSION=	1.0
CATEGORIES=	mail
MASTER_SITES=	http://www.rulesemporium.com/programs/ \
		ftp://renatasystems.org/pub/FreeBSD/ports/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}.txt
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Generates top spam/ham rules fired for SpamAssassin installations

RUN_DEPENDS=	p5-Getopt-Long>=0:${PORTSDIR}/devel/p5-Getopt-Long

USE_PERL5=	yes

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/sa-stats

post-extract:
		${CP} ${DISTDIR}/${DISTNAME} ${WRKSRC}

do-install:
		${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${PREFIX}/bin/sa-stats

.include <bsd.port.mk>
