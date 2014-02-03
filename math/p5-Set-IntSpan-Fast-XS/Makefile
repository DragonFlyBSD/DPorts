# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: math/p5-Set-IntSpan-Fast-XS/Makefile 341829 2014-01-30 10:27:43Z az $

PORTNAME=	Set-IntSpan-Fast-XS
PORTVERSION=	0.05
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Set
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Faster Set::IntSpan::Fast

BUILD_DEPENDS=	p5-Data-Swap>=0.07:${PORTSDIR}/devel/p5-Data-Swap \
		p5-Set-IntSpan-Fast>=1.13:${PORTSDIR}/math/p5-Set-IntSpan-Fast
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
