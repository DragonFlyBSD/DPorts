# Created by: Felippe de Meirelles Motta <lippemail@gmail.com>
# $FreeBSD: devel/p5-Test-Kwalitee/Makefile 325878 2013-09-01 17:01:35Z az $

PORTNAME=	Test-Kwalitee
PORTVERSION=	1.01
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Test the Kwalitee of a distribution before you release it

BUILD_DEPENDS=	p5-Module-CPANTS-Analyse>=0:${PORTSDIR}/devel/p5-Module-CPANTS-Analyse \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage \
		p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature
RUN_DEPENDS=	p5-Module-CPANTS-Analyse>=0:${PORTSDIR}/devel/p5-Module-CPANTS-Analyse \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage \
		p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Test::Kwalitee.3

.include <bsd.port.mk>
