# New ports collection makefile for:	p5-CPAN-Meta-Requirements
# Date created:		2012-04-02
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-CPAN-Meta-Requirements/Makefile,v 1.3 2012/11/17 05:56:05 svnexp Exp $
#

PORTNAME=	CPAN-Meta-Requirements
PORTVERSION=	2.122
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A set of version requirements for a CPAN distribution

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes

MAN3=		CPAN::Meta::Requirements.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
BUILD_DEPENDS+=	p5-version>=0.77:${PORTSDIR}/devel/p5-version
RUN_DEPENDS+=	p5-version>=0.77:${PORTSDIR}/devel/p5-version
TEST_DEPENDS+=	p5-Test-Simple>=0.88:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
