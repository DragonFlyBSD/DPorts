# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: devel/p5-DateTime-Event-Chinese/Makefile 338878 2014-01-06 13:41:40Z az $

PORTNAME=	DateTime-Event-Chinese
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	DateTime Extension for Calculating Important Chinese Dates

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DateTime-Astro>=0:${PORTSDIR}/devel/p5-DateTime-Astro \
		p5-Math-Round>=0:${PORTSDIR}/math/p5-Math-Round
RUN_DEPENDS=	p5-DateTime-Astro>=0:${PORTSDIR}/devel/p5-DateTime-Astro \
		p5-Math-Round>=0:${PORTSDIR}/math/p5-Math-Round

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
