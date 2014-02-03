# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: irc/p5-Bot-BasicBot/Makefile 341762 2014-01-29 17:18:46Z az $

PORTNAME=	Bot-BasicBot
PORTVERSION=	0.89
CATEGORIES=	irc perl5
MASTER_SITES=	CPAN/Bot
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Simple irc bot baseclass

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-IRC>=0:${PORTSDIR}/irc/p5-POE-Component-IRC
RUN_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-IRC>=0:${PORTSDIR}/irc/p5-POE-Component-IRC

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
