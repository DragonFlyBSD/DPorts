# Created by: will
# $FreeBSD: devel/p5-Agent/Makefile 331766 2013-10-27 12:17:59Z vanilla $

PORTNAME=	Agent
PORTVERSION=	3.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl module that provides a foundation for software agent developers

BUILD_DEPENDS=	p5-Class-Tom>=0:${PORTSDIR}/devel/p5-Class-Tom
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
