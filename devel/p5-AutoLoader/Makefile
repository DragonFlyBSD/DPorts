# New ports collection makefile for:	p5-AutoLoader
# Date created:				Jan 18 2007
# Whom:					Rong-En Fan <rafan@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-AutoLoader/Makefile,v 1.15 2012/12/23 12:58:39 svnexp Exp $
#

PORTNAME=	AutoLoader
PORTVERSION=	5.73
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Load subroutines only on demand

PERL_CONFIGURE=	yes

MAN3=		AutoLoader.3 AutoSplit.3

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
