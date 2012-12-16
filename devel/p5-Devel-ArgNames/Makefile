# New ports collection makefile for:    p5-Devel-ArgNames
# Date created:         2010-08-08
# Whom:                 Christopher Key <cjk32@cam.ac.uk>
#
# $FreeBSD: ports/devel/p5-Devel-ArgNames/Makefile,v 1.4 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	Devel-ArgNames
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Figure out the names of variables passed into subroutines

BUILD_DEPENDS=	p5-PadWalker>=0:${PORTSDIR}/devel/p5-PadWalker
RUN_DEPENDS=	p5-PadWalker>=0:${PORTSDIR}/devel/p5-PadWalker
TEST_DEPENDS=	p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

PERL_CONFIGURE=	yes

MAN3=		Devel::ArgNames.3

.include <bsd.port.mk>
