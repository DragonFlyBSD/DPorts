# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: devel/p5-DateTime-Event-SolarTerm/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	DateTime-Event-SolarTerm
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	DateTime Extension to Calculate Solar Terms

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Set>=0:${PORTSDIR}/devel/p5-DateTime-Set \
		p5-DateTime-Util-Calc>=0.12:${PORTSDIR}/devel/p5-DateTime-Util-Calc \
		p5-DateTime-Util-Astro>=0.11:${PORTSDIR}/devel/p5-DateTime-Util-Astro
RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Set>=0:${PORTSDIR}/devel/p5-DateTime-Set \
		p5-DateTime-Util-Calc>=0.12:${PORTSDIR}/devel/p5-DateTime-Util-Calc \
		p5-DateTime-Util-Astro>=0.11:${PORTSDIR}/devel/p5-DateTime-Util-Astro

USES=		perl5
USE_PERL5=	configure

MAN3=		DateTime::Event::SolarTerm.3

NO_STAGE=	yes
.include <bsd.port.mk>
