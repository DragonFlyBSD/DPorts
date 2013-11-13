# Created by: chinsan
# $FreeBSD: devel/p5-Perl6-Builtins/Makefile 332203 2013-10-31 06:20:32Z vanilla $

PORTNAME=	Perl6-Builtins
PORTVERSION=	0.0.3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provide Perl 5 versions of the new Perl 6 builtins

BUILD_DEPENDS=	p5-Contextual-Return>=0:${PORTSDIR}/devel/p5-Contextual-Return \
		p5-version>=0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
