# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Module-Load-Conditional/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	Module-Load-Conditional
PORTVERSION=	0.58
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Looking up Perl modules information/loading at runtime

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-CoreList>=2.22:${PORTSDIR}/devel/p5-Module-CoreList
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501600
BUILD_DEPENDS+=	p5-Module-Metadata>=1.000005:${PORTSDIR}/devel/p5-Module-Metadata
RUN_DEPENDS+=	p5-Module-Metadata>=1.000005:${PORTSDIR}/devel/p5-Module-Metadata
.endif

.include <bsd.port.post.mk>
