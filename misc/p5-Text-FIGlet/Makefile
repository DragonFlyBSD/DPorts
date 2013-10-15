# Created by: Daniel B. Hemmerich <dan@spot.org>
# $FreeBSD: misc/p5-Text-FIGlet/Makefile 328845 2013-09-30 18:44:49Z sunpoet $

PORTNAME=	Text-FIGlet
PORTVERSION=	2.19.3
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module to provide FIGlet abilities, akin to banner

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	${LOCALBASE}/bin/figlet:${PORTSDIR}/misc/figlet
TEST_DEPENDS=	p5-Test-Differences>=0:${PORTSDIR}/devel/p5-Test-Differences \
		p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
