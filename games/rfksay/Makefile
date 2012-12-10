# ex:ts=8
# Ports collection makefile for:  rfksay
# Date created:                   Thu Jul 18, 2002
# Whom:                           Michael L. Hostbaek (mich@freebsdcluster.org)
#
# $FreeBSD: ports/games/rfksay/Makefile,v 1.5 2012/11/17 05:57:51 svnexp Exp $
#

PORTNAME=	rfksay
PORTVERSION=	0.1
CATEGORIES=	games
MASTER_SITES=	http://freebsdcluster.org/~mich/software/
DISTNAME=	rfksay

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Generates a kitten finding robot with a text bubble

USE_PERL5=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKDIR}/kittensay ${PREFIX}/bin/
	${INSTALL_SCRIPT} ${WRKDIR}/robotsay ${PREFIX}/bin/

.include <bsd.port.mk>
