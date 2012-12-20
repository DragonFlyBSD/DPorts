# New ports collection makefile for:	p5-Chemistry-FormulaPattern
# Date created:		2010-03-10
# Whom:			Steve Wills <steve@mouf.net>
#
# $FreeBSD: ports/science/p5-Chemistry-FormulaPattern/Makefile,v 1.5 2012/11/17 06:00:59 svnexp Exp $
#

PORTNAME=	Chemistry-FormulaPattern
PORTVERSION=	0.10
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ITUB
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Match molecule by formula

BUILD_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol \
		p5-Chemistry-Pattern>=0:${PORTSDIR}/science/p5-Chemistry-Pattern
RUN_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol \
		p5-Chemistry-Pattern>=0:${PORTSDIR}/science/p5-Chemistry-Pattern

MAN3=	Chemistry::FormulaPattern.3 Chemistry::File::FormulaPattern.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
