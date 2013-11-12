# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: news/p5-POE-Component-Client-NNTP/Makefile 332594 2013-11-03 08:05:18Z az $

PORTNAME=	POE-Component-Client-NNTP
PORTVERSION=	2.22
CATEGORIES=	news perl5 devel
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE component for non-blocking NNTP access

BUILD_DEPENDS=	p5-POE>=0.999.9:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-Pluggable>=0.03:${PORTSDIR}/devel/p5-POE-Component-Pluggable \
		p5-Test-POE-Server-TCP>=0:${PORTSDIR}/devel/p5-Test-POE-Server-TCP
RUN_DEPENDS=	p5-POE>=0.999.9:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-Pluggable>=0.03:${PORTSDIR}/devel/p5-POE-Component-Pluggable

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
