# Created by: Takuya Tsuchida <tsucchi@cpan.org>
# $FreeBSD: devel/p5-Test-Synopsis/Makefile 338867 2014-01-06 12:18:47Z az $

PORTNAME=	Test-Synopsis
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tsucchi@cpan.org
COMMENT=	Test your SYNOPSIS code in CPAN module

BUILD_DEPENDS=	p5-Filter>=1.35:${PORTSDIR}/devel/p5-Filter \
		p5-Test-Simple>=0.88:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS=	p5-Filter>=1.35:${PORTSDIR}/devel/p5-Filter \
		p5-Test-Simple>=0.88:${PORTSDIR}/devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
