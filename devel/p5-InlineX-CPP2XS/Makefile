# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: devel/p5-InlineX-CPP2XS/Makefile 332028 2013-10-30 01:38:24Z vanilla $

PORTNAME=	InlineX-CPP2XS
PORTVERSION=	0.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SISYPHUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert from Inline C++ code to XS

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Inline>=0.50:${PORTSDIR}/devel/p5-Inline \
		p5-Inline-CPP>=0.39:${PORTSDIR}/devel/p5-Inline-CPP
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Warn>=0.24:${PORTSDIR}/devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
