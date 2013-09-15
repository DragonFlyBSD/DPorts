# Created by: Dmitry Liakh <dliakh@ukr.net>
# $FreeBSD: russian/p5-Lingua-DetectCyrillic/Makefile 326975 2013-09-11 12:59:14Z az $

PORTNAME=	Lingua-DetectCyrillic
PORTVERSION=	0.02
CATEGORIES=	russian perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dliakh@ukr.net
COMMENT=	Detects 7 Cyrillic codings as well as the language

RUN_DEPENDS=	p5-Unicode-Map8>=0:${PORTSDIR}/converters/p5-Unicode-Map8 \
		p5-Unicode-String>=0:${PORTSDIR}/converters/p5-Unicode-String

USES=		perl5
USE_PERL5=	configure

MAN3=		Lingua::DetectCyrillic.3

.include <bsd.port.mk>
